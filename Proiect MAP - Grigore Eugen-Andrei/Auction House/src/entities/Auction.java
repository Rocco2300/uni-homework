package entities;

import java.util.Arrays;
import java.util.List;

public class Auction implements IEntity {
    private int auctionId;
    private int userId;
    private int itemId;
    private int startingPrice;

    public Auction() {
        this.auctionId = -1;
        this.userId = -1;
        this.itemId = -1;
        this.startingPrice = 0;
    }

    public Auction(int userId, int itemId, int startingPrice) {
        this.auctionId = -1;
        this.userId = userId;
        this.itemId = itemId;
        this.startingPrice = startingPrice;
    }

    @Override
    public String serialize() {
        String res = "";
        res += Integer.toString(auctionId);
        res += ",";
        res += Integer.toString(userId);
        res += ",";
        res += Integer.toString(itemId);
        res += ",";
        res += Integer.toString(startingPrice);
        return res;
    }

    @Override
    public void deserialize(String line) {
        List<String> tokens;
        tokens = Arrays.asList(line.split(","));

        this.auctionId = Integer.parseInt(tokens.get(0));
        this.userId = Integer.parseInt(tokens.get(1));
        this.itemId = Integer.parseInt(tokens.get(2));
        this.startingPrice = Integer.parseInt(tokens.get(3));
    }

    @Override
    public boolean equals(IEntity other) {
        Auction auction = (Auction)other;
        if (auctionId == auction.auctionId ||
            itemId == auction.itemId) {
            return true;
        }

        return false;
    }

    @Override
    public boolean exact(IEntity query) {
        return true;
    }

    @Override
    public void printFields() {
        System.out.print(auctionId + " ");
        System.out.print(userId + " ");
        System.out.print(itemId + " ");
        System.out.print(startingPrice + "\n");
    }

    @Override
    public int getId() { return auctionId; }
    @Override
    public String getEntityName() { return "auction"; }

    @Override
    public void setId(int id) { this.auctionId = id; }
    public void setUserId(int id) { this.userId = id; }
    public void setItemId(int id) { this.itemId = id; }
    public void setStartingPrice(int price) { this.startingPrice = price; }

    public int getItemId() { return itemId; }

    public int getUserId() { return userId; }

    public int getStartingPrice() { return startingPrice; }
}
