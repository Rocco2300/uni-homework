package managers;

import database.Database;
import database.Table;
import entities.*;

import java.util.ArrayList;
import java.util.List;

public class AuctionManager extends Manager {
    private static AuctionManager instance = null;

    private AuctionManager() {

    }

    public static AuctionManager getInstance() {
        if (instance == null) {
            instance = new AuctionManager();
        }

        return instance;
    }

    public List<AuctionListing> getListings() {
        List<AuctionListing> ret = new ArrayList<>();
        AuctionManager auctionManger = AuctionManager.getInstance();

        Table bidTable, usersTable, itemsTable, auctionTable;
        try {
            bidTable = database.getTable("bid");
            usersTable = database.getTable("users");
            itemsTable = database.getTable("items");
            auctionTable = database.getTable("auction");
        } catch (Exception e) {
            System.out.println("Error getting tables in AuctionManager.");
            System.out.println(e.getMessage());
            return ret;
        }

        List<IEntity> auctions = auctionTable.getRecords();

        for (IEntity entity : auctions) {
            Auction auction = (Auction)entity;
            Item itemQuery = new Item();
            itemQuery.setId(auction.getItemId());
            Item item = (Item)itemsTable.getRecord(itemQuery);

            User userQuery = new User();
            userQuery.setId(auction.getUserId());
            User user = (User)usersTable.getRecord(userQuery);

            Bid bidQuery = new Bid();
            bidQuery.setAuctionId(auction.getId());
            Bid bid = (Bid)bidTable.getRecord(bidQuery);

            String bidder = "-";
            int currentBid = auction.getStartingPrice();
            if (bid != null) {
                User bidderUserQuery = new User();
                bidderUserQuery.setId(bid.getUserId());
                User bidderUser = (User)usersTable.getRecord(bidderUserQuery);

                bidder = bidderUser.getUsername();
                currentBid = bid.getOffering();
            }

            AuctionListing listing = new AuctionListing(auction.getId(), item.getName(),
                    user.getUsername(), currentBid, bidder);
            ret.add(listing);
        }

        return ret;
    }

    public void makeListing(Auction auction) {
        Table auctionTable;
        try {
            auctionTable = database.getTable("auction");
        } catch (Exception e) {
            System.out.println("Error getting tables in AuctionManager.");
            System.out.println(e.getMessage());
            return;
        }
        auctionTable.insert(auction);
    }

    public boolean validateAuction(Auction auction) {
        Table auctionTable;
        try {
            auctionTable = database.getTable("auction");
        } catch (Exception e) {
            System.out.println("Error getting tables in AuctionManager.");
            System.out.println(e.getMessage());
            return false;
        }

        Auction resultAuction = (Auction)auctionTable.getRecord(auction);
        if (resultAuction != null) {
            return true;
        }

        return false;
    }
}
