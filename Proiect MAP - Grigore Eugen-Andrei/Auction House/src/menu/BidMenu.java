package menu;

import entities.BidListing;
import entities.IEntity;
import entities.Item;
import managers.BidManager;
import managers.ItemManager;
import managers.LoginManager;

import java.util.List;

public class BidMenu extends Menu {
    public BidMenu() {
        super();
    }

    @Override
    public void showMenu() {
        System.out.println("Your bids: ");

        BidManager bidManager = BidManager.getInstance();
        List<BidListing> listings = bidManager.getBidListings();

        int index = 1;
        for (BidListing listing : listings) {
            String indexer = String.format("\t#%-2s ", index);
            System.out.println(indexer + listing.getFormatterListing());
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
