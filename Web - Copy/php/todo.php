<?php

header('Access-Control-Allow-Origin: *');
header('Access-Control-Allow-Methods: POST, GET, OPTIONS');

function getConnection() {
    $host = "localhost";
    $user = "todo_user";
    $pass = "12345";
    $database = "todo_app";

    $conn = new mysqli($host, $user, $pass, $database);
    if ($conn->connect_error) {
        die("Connection failed: " . $conn->connect_error);
    }

    return $conn;
}

function doesUserExist($conn, $username) {
    $stmt = $conn->prepare("select * from users where username = ? LIMIT 1");
    $stmt->bind_param("s", $username);

    $stmt->execute();
    $stmt->store_result();

    $exists = $stmt->num_rows();
    $stmt->close();

    return $exists;
}

function getUserId($conn, $username) {
    $stmt = $conn->prepare("select user_id from users where username = ?");
    $stmt->bind_param("s", $username);

    $stmt->execute();
    $stmt->store_result();

    $user_id = -1;
    $stmt->bind_result($user_id);
    $stmt->fetch();
    $stmt->close();

    return $user_id;
}

if ($_SERVER["REQUEST_METHOD"] == "POST") {
    if ($_POST["action"] == "addTodo") {
        $todo_text = $_POST["todoText"];
        $user = $_POST["user"];
        $conn = getConnection();

        $response = new stdClass();
        if (doesUserExist($conn, $user)) {
            $user_id = getUserId($conn, $user);

            $stmt = $conn->prepare("insert into todo_items (user_id, todo_text) values (?, ?)");
            $stmt->bind_param('is', $user_id, $todo_text);
            $stmt->execute();
            $stmt->close();

            $stmt = $conn->prepare("select todo_id from todo_items where user_id=?");
            $stmt->bind_param("i", $user_id);

            $stmt->execute();
            $stmt->store_result();

            $stmt->bind_result($todo_id);
            $stmt->fetch();
            $stmt->close();

            $response->status = 'success';
            $response->todoId = $todo_id;

            echo json_encode($response);
            return;
        }
        $response->status = 'failure';

        echo json_encode($response);
    } else if ($_POST['action'] == "removeTodo") {
        $user = $_POST['user'];
        $todo_id = $_POST['todoId'];
        $conn = getConnection();

        $response = new stdClass();
        if (doesUserExist($conn, $user)) {
            $user_id = getUserId($conn, $user);

            $stmt = $conn->prepare("delete from todo_items where user_id=? and todo_id=?");
            $stmt->bind_param("ii", $user_id, $todo_id);
    
            $stmt->execute();
            $stmt->close();

            $response->status = 'success';
            echo json_encode($response);
            return;
        }

        $response->status = 'failure';
        echo json_encode($response);
    }
} else if ($_SERVER["REQUEST_METHOD"] == "GET") {
    if ($_GET["action"] == "getTodos") {
        $user = $_GET["user"];
        $conn = getConnection();

        $response = new stdClass();
        if (doesUserExist($conn, $user)) {
            $user_id = getUserId($conn, $user);

            $stmt = $conn->prepare("select * from todo_items where user_id=?");
            $stmt->bind_param("i", $user_id);

            $stmt->execute();
            $stmt->store_result();

            $res = Array();
            $stmt->bind_result($res['todo_id'], $res['user_id'], $res['todo_text']);
            
            $todo_items = Array();
            while ($stmt->fetch()) {
                $todo_item = new stdClass();
                $todo_item->todoId = $res['todo_id'];
                $todo_item->userId = $res['user_id'];
                $todo_item->todoText = $res['todo_text'];

                array_push($todo_items, $todo_item);
            }

            $response->status = 'success';
            $response->todoItems = $todo_items;
            echo json_encode($response);
            return;
        }

        $response->status = 'failure';
        echo json_encode($response);
    }
}
?>