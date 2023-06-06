package menu;

import java.util.ArrayList;
import java.util.List;

public class MainMenu extends Menu {
    public MainMenu() {
        super();
    }

    @Override
    public void showMenu() {
        System.out.println("1. Auctions");
        System.out.println("2. Inventory");
        System.out.println("3. Bids");
        System.out.println("4. Exit");

        System.out.print("> ");
        int choice = scanner.nextInt();

        handleChoice(choice);
    }

    @Override
    public void handleChoice(int choice) {
        if (choice == 4) {
            System.out.println("Exiting..");
            return;
        }

        if (choice < 0 && choice > 4) {
            System.out.println("Invalid choice");
            showMenu();
            return;
        }

        submenus.get(choice - 1).runMenu();
        showMenu();
    }
}
