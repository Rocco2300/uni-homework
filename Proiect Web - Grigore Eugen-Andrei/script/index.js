let $ = require("jquery");

let signin = () => {
    let username = $("#uname").val();
    let password = $("#pword").val();
    
    $.ajax({
        url: 'php/signin.php',
        type: 'POST',
        data: {
            action: 'signin',
            uname: username,
            pword: password
        },
        success: (data) => {
            let json = JSON.parse(data);
            
            if (json.status === 'success') {
                sessionStorage.setItem('username', username);
                window.location.href = 'http://localhost:3000/todo.html';
            } else {
                alert("User doesn't exists!");
            }
        },
        error: () => {
            alert("failed");
        }
    });
};

let signup = () => {
    let username = $("#uname").val();
    let password = $("#pword").val();
    
    $.ajax({
        url: 'php/signin.php',
        type: 'POST',
        data: {
            action: 'signup',
            uname: username,
            pword: password
        },
        success: (data) => {
            let json = JSON.parse(data);
            
            if (json.status === 'success') {
                alert("Signed up, you can now sign in")
            } else {
                alert("User already exists!");
            }
        },
        error: () => {
            alert("failed");
        }
    });
};

$(() => {
    $("#signin-btn").on("click", signin);
    $("#signup-btn").on("click", signup);
});