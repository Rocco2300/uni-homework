package menu;

import java.io.IOException;
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Menu {
    protected Scanner scanner;
    protected List<Menu> submenus;

    Menu() {
        scanner = new Scanner(System.in);
        submenus = new ArrayList<>();
    }

    public void addSubmenu(Menu submenu) {
        submenus.add(submenu);
    }

    public void runMenu() {
        showMenu();
    }

    public void showMenu() { }
    public void handleChoice(int choice) { }
}
