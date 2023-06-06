package menu;

import managers.LoginManager;

import java.io.IOException;
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class LoginMenu extends Menu {
    public LoginMenu() {
        super();
    }

    @Override
    public void showMenu() {
        System.out.println("1. Signin");
        System.out.println("2. Singup");
        System.out.println("3. Exit");

        System.out.print("> ");
        int choice = scanner.nextInt();

        handleChoice(choice);
    }

    @Override
    public void handleChoice(int choice) {
        boolean ret;
        String username, password;
        LoginManager loginManager = LoginManager.getInstance();

        switch (choice) {
            case 1:
                System.out.print("Username: ");
                username = scanner.next();
                System.out.print("Password: ");
                password = scanner.next();

                ret = loginManager.signin(username, password);
                if (ret == true) {
                    System.out.println("You are logged in!");
                    submenus.get(0).runMenu();
                } else {
                    System.out.println("User doesn't exist!");
                    showMenu();
                }
                break;
            case 2:
                System.out.print("Username: ");
                username = scanner.next();
                System.out.print("Password: ");
                password = scanner.next();

                ret = loginManager.signup(username, password);
                if (ret == true) {
                    System.out.println("Successfully created account, you can now log in!");
                    showMenu();
                } else {
                    System.out.println("User already exists.");
                    showMenu();
                }
                break;
            case 3:
                System.out.println("Exiting..");
                break;
        }
    }
}
