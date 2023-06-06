package menu;

import entities.*;
import managers.AuctionManager;
import managers.BidManager;
import managers.ItemManager;
import managers.LoginManager;

import java.util.ArrayList;
import java.util.List;

public class AuctionMenu extends Menu {

    List<AuctionListing> listings;
    public AuctionMenu() {
        super();
        listings = new ArrayList<>();
    }

    @Override
    public void showMenu() {
        System.out.println("1. List an auction");
        System.out.println("2. Place a bid");

        AuctionManager auctionManager = AuctionManager.getInstance();
        listings.clear();
        listings = auctionManager.getListings();

        int index = 1;
        String header = String.format("\t%-4s %-20s %-20s %-20s %-20s",
                "No.", "Name", "Owner", "Price", "Bidder");
        System.out.println("Listings: ");
        System.out.println(header);
        for (AuctionListing listing : listings) {
            String indexer = String.format("\t#%-3s ", index);
            System.out.println(indexer + listing.getFormatterListing());
            index++;
        }

        System.out.print("> ");
        int choice = scanner.nextInt();

        handleChoice(choice);
    }

    @Override
    public void handleChoice(int choice) {
        switch (choice) {
            case 1:
                LoginManager userManager = LoginManager.getInstance();
                ItemManager itemManager = ItemManager.getInstance();
                User currentUser = userManager.getCurrentUser();
                List<IEntity> items = itemManager.getItems(currentUser);

                int index = 1;
                System.out.println("Inventory: ");
                for (IEntity itemEntity : items) {
                    Item item = (Item)itemEntity;
                    String indexer = String.format("\t#%s ", index);
                    System.out.println(indexer + item.getName());
                    index++;
                }

                System.out.print("> ");
                int itemChoice = scanner.nextInt() - 1;
                if (itemChoice <= 0 || itemChoice >= items.size()) {
                    System.out.println("Invalid option");
                    return;
                }

                Item chosenItem = (Item)items.get(itemChoice);
                if (itemManager.isItemListable(chosenItem)) {
                    System.out.print("Price?: ");
                    int startingPrice = scanner.nextInt();

                    int userId = currentUser.getId();
                    int itemId = chosenItem.getId();

                    Auction auction = new Auction(userId, itemId, startingPrice);
                    AuctionManager auctionManager = AuctionManager.getInstance();
                    auctionManager.makeListing(auction);
                } else {
                    System.out.println("Item is not listable");
                }

                break;
            case 2:
                System.out.print("Which auction?: ");
                int auctionChoice = scanner.nextInt() - 1;

                if (auctionChoice <= 0 || auctionChoice >= listings.size()) {
                    System.out.println("Invalid choice");
                    return;
                }

                Auction auction = new Auction();
                auction.setId(listings.get(auctionChoice).getId());
                AuctionManager auctionManager = AuctionManager.getInstance();
                if (!auctionManager.validateAuction(auction)) {
                    System.out.println("Invalid auction");
                    return;
                }

                System.out.print("Offer?: ");
                int offer = scanner.nextInt();
                BidManager bidManager = BidManager.getInstance();
                bidManager.placeBid(auction, offer);

            default:
                break;
        }
    }
}
