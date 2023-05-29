<?php

header('Access-Control-Allow-Origin: *');
header('Access-Control-Allow-Methods: POST, GET, OPTIONS');

function getSalt($n) {
    $characters = '0123456789abcdefghijklmnopqrstuvwxyz';
    $randomString = '';

    for ($i = 0; $i < $n; $i++) {
        $index = rand(0, strlen($characters) - 1);
        $randomString .= $characters[$index];
    }

    return $randomString;
}

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

function getUserData($conn, $username) {
    $res = Array();

    $stmt = $conn->prepare("select username, password_hash, password_salt from users where username = ?");
    $stmt->bind_param("s", $username);

    $stmt->execute();
    $stmt->store_result();

    $stmt->bind_result($res['username'], $res['password_hash'], $res['password_salt']);
    $stmt->fetch();
    $stmt->close();

    return $res;
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

function insertNewUser($conn, $userData) {
    $salt = getSalt(32);
    $hash = hash('sha256', $userData['password'] . $salt);

    $stmt = $conn->prepare("insert into users (username, password_hash, password_salt) values (?, ?, ?)");
    $stmt->bind_param("sss", $userData['username'], $hash, $salt);
    $stmt->execute();
    $stmt->close();
}

if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $username = $_POST['uname'];
    $password = $_POST['pword'];

    $conn = getConnection();

    $response = new stdClass();
    if ($_POST["action"] == "signin") {
        $userData = getUserData($conn, $username);

        $password_hash = hash("sha256", $password . $userData['password_salt']);
        if ($password_hash == $userData['password_hash']) {
            $response->status = "success";
            echo json_encode($response);
        } else {
            $response->status = "failure";
            echo json_encode($response);
        }
    } else if ($_POST["action"] == "signup") {
        $userData['username'] = $username;
        $userData['password'] = $password;

        if (!doesUserExist($conn, $username)) {
            insertNewUser($conn, $userData);

            $response->status = "success";
            echo json_encode($response);
        } else {
            $response->status = "failure";
            echo json_encode($response);
        }
    }
}

?>