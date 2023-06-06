package managers;

import entities.Auction;
import entities.IEntity;
import entities.Item;
import entities.User;
import database.Table;

import java.util.ArrayList;
import java.util.List;

public class ItemManager extends Manager {
    private static ItemManager instance = null;

    private ItemManager() {

    }

    public static ItemManager getInstance() {
        if (instance == null) {
            instance = new ItemManager();
        }

        return instance;
    }

    public List<IEntity> getItems(User user) {
        Table itemsTable;
        try {
            itemsTable = database.getTable("items");
        } catch (Exception e) {
            System.out.println("Error getting tables in ItemManager.");
            System.out.println(e.getMessage());
            return new ArrayList<>();
        }

        Item itemQuery = new Item();
        itemQuery.setUserId(user.getId());
        return itemsTable.getRecords(itemQuery);
    }

    public boolean isItemListable(Item item) {
        Table itemsTable;
        Table auctionTable;
        try {
            itemsTable = database.getTable("items");
            auctionTable = database.getTable("auction");
        } catch (Exception e) {
            System.out.println("Error getting tables in ItemManager.");
            System.out.println(e.getMessage());
            return false;
        }

        Item resultItem = (Item)itemsTable.getExact(item);
        if (resultItem == null) {
            return false;
        }

        Auction queryAuction = new Auction();
        queryAuction.setItemId(resultItem.getId());
        Auction auction = (Auction)auctionTable.getRecord(queryAuction);
        if (auction != null) {
            return false;
        }

        return true;
    }
}
