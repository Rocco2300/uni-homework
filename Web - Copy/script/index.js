let signin = () => {
    let username = $("#uname").val();
    let password = $("#pword").val();
    
    $.ajax({
        url: 'http://localhost:3000/php/signin.php',
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
        error: (data) => {
            alert(data);
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
        error: (data) => {
            alert(data);
        }
    });
};

$(() => {
    $("#signin-btn").on("click", signin);
    $("#signup-btn").on("click", signup);
});