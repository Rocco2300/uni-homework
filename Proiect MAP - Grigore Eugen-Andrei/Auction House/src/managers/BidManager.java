package managers;

import database.Table;
import entities.*;

import java.util.ArrayList;
import java.util.Formatter;
import java.util.List;

public class BidManager extends Manager {
    private static BidManager instance = null;

    private BidManager() {

    }

    public static BidManager getInstance() {
        if (instance == null) {
            instance = new BidManager();
        }

        return instance;
    }

    public List<BidListing> getBidListings() {
        List<BidListing> ret = new ArrayList<>();
        LoginManager loginManager = LoginManager.getInstance();
        User currentUser = loginManager.getCurrentUser();

        Table bidTable, usersTable, itemsTable, auctionTable;
        try {
            bidTable = database.getTable("bid");
            usersTable = database.getTable("users");
            itemsTable = database.getTable("items");
            auctionTable = database.getTable("auction");
        } catch (Exception e) {
            System.out.println("Error getting tables in BidManager.");
            System.out.println(e.getMessage());
            return ret;
        }

        Bid bidQuery = new Bid();
        bidQuery.setUserId(currentUser.getId());
        List<IEntity> bids = bidTable.getRecords(bidQuery);

        for (IEntity bidEntity : bids) {
            Bid bid = (Bid)bidEntity;

            Auction queryAuction = new Auction();
            queryAuction.setId(bid.getAuctionId());
            Auction resultAuction = (Auction)auctionTable.getRecord(queryAuction);

            Item queryItem = new Item();
            queryItem.setId(resultAuction.getItemId());
            Item resultItem = (Item)itemsTable.getRecord(queryItem);

            User queryUser = new User();
            queryUser.setId(resultAuction.getUserId());
            User resultUser = (User)usersTable.getRecord(queryUser);

            BidListing bidListing = new BidListing(bid.getId(), resultItem.getName(), resultUser.getUsername(),
                    bid.getOffering());
            ret.add(bidListing);
        }
        return ret;
    }

    public void placeBid(Auction auction, int offer) {
        Table bidTable;
        try {
            bidTable = database.getTable("bid");
        } catch (Exception e) {
            System.out.println("Error getting tables in BidManager.");
            System.out.println(e.getMessage());
            return;
        }

        Bid queryBid = new Bid();
        queryBid.setAuctionId(auction.getId());
        Bid resultBid = (Bid)bidTable.getRecord(queryBid);
        if (resultBid != null) {
            bidTable.delete(resultBid);
        }

        LoginManager loginManager = LoginManager.getInstance();
        int userId = loginManager.getCurrentUser().getId();

        Bid newBid = new Bid(auction.getId(), userId, offer);
        bidTable.insert(newBid);
    }
}
