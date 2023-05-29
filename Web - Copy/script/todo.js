$(() => {
    let user = sessionStorage.getItem("username");

    $.ajax({
        url: 'php/todo.php',
        type: 'GET',
        data: {
            user: user,
            action: 'getTodos'
        },
        success: (data) => {
            let json = JSON.parse(data);
            if (json.status != 'success') {
                return;
            }

            let todoItems = json.todoItems;
            for (let i = 0; i < todoItems.length; i++) {
                let todoText = todoItems[i].todoText;
                let item = $(`<div class="todo-item"><input type="checkbox" class="todo-done"><p class="todo-text">${todoText}</p></div>`);

                item.attr('id', todoItems[i].todoId);
                
                $("#todo-list").append(item);
            }
        },
        error: () => {
            alert("failed to submit");
        }
    });

    $("#todo-submit").on("click", () => {
        let todoText = $("#todo-input-field").val();

        if (todoText.length > 68) {
            alert("Todo text is too long, should be under 68");
            return;
        }

        $.ajax({
            url: 'php/todo.php',
            type: 'POST',
            data: {
                user: user,
                todoText: todoText,
                action: 'addTodo'
            },
            success: (data) => {
                let item = $(`<div class="todo-item"><input type="checkbox" class="todo-done"><p class="todo-text">${todoText}</p></div>`);
                let json = JSON.parse(data);

                if (json.status == 'success') {
                    item.attr('id', json.todoId);

                    $("#todo-list").append(item);
                }
            },
            error: () => {
                alert("failed to submit");
            }
        });
    });

    $(document).on('click', '.todo-done', () => {
        let todoId = $(this).parent().attr("id");

        $.ajax({
            url: 'php/todo.php',    
            type: 'POST',
            data: {
                action: 'removeTodo',
                user: user,
                todoId: todoId
            },
            success: (data) => {
                alert(data);
                let json = JSON.parse(data);

                if (json.status == 'success') {
                    $(this).parent().remove();
                }
            },
            error: () => {
                alert("failed to submit");
            }
        })
    });

});