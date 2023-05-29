create database todo_app;
use todo_app;

create table users (
	user_id int not null auto_increment,
    username varchar(32) not null unique,
    password_hash varchar(64) not null,
    password_salt varchar(32) not null,
    primary key (user_id)
);

create table todo_items (
	todo_id int not null auto_increment,
    user_id int not null,
    todo_text blob not null,
    primary key (todo_id, user_id),
    foreign key (user_id) references users(user_id)
);
