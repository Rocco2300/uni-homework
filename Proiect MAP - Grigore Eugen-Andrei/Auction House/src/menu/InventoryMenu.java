package menu;

import entities.IEntity;
import entities.Item;
import managers.ItemManager;
import managers.LoginManager;

import java.util.List;

public class InventoryMenu extends Menu {
    public InventoryMenu() {
        super();
    }

    @Override
    public void showMenu() {
        System.out.println("Inventory: ");

        LoginManager loginManager = LoginManager.getInstance();
        ItemManager itemManager = ItemManager.getInstance();

        int index = 1;
        List<IEntity> items = itemManager.getItems(loginManager.getCurrentUser());
        for (IEntity itemEntity : items) {
            Item item = (Item)itemEntity;

            String indexer = String.format("\t#%-2s ", index);
            System.out.println(indexer + item.getName());
            index++;
        }

        System.out.println("1. Go back");

        System.out.print("> ");
        int choice = scanner.nextInt();

        handleChoice(choice);
    }

    @Override
    public void handleChoice(int choice) {
        if (choice != 1) {
            System.out.println("Invalid choice");
            showMenu();
            return;
        }

        System.out.println("Exiting..");
    }
}
