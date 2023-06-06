package entities;

import java.util.Arrays;
import java.util.List;

public class Bid implements IEntity {
    private int bidId;
    private int auctionId;
    private int userId;
    private int offering;

    public Bid() {
        this.bidId = -1;
        this.auctionId = -1;
        this.userId = -1;
        this.offering = 0;
    }

    public Bid(int auctionId, int userId, int offering) {
        this.bidId = -1;
        this.auctionId = auctionId;
        this.userId = userId;
        this.offering = offering;
    }

    @Override
    public String serialize() {
        String res = "";
        res += Integer.toString(bidId);
        res += ",";
        res += Integer.toString(auctionId);
        res += ",";
        res += Integer.toString(userId);
        res += ",";
        res += Integer.toString(offering);
        return res;
    }

    @Override
    public void deserialize(String line) {
        List<String> tokens;
        tokens = Arrays.asList(line.split(","));

        this.bidId = Integer.parseInt(tokens.get(0));
        this.auctionId = Integer.parseInt(tokens.get(1));
        this.userId = Integer.parseInt(tokens.get(2));
        this.offering = Integer.parseInt(tokens.get(3));
    }

    @Override
    public boolean equals(IEntity other) {
        Bid bid = (Bid)other;
        if (userId == bid.userId ||
            auctionId == bid.auctionId) {
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
        System.out.print(bidId + " ");
        System.out.print(auctionId + " ");
        System.out.print(userId + " ");
        System.out.print(offering + "\n");
    }

    @Override
    public int getId() { return bidId; }
    @Override
    public String getEntityName() { return "bid"; }

    public void setAuctionId(int id) { this.auctionId = id; }
    public void setUserId(int id) { this.userId = id; }
    @Override
    public void setId(int id) { this.bidId = id; }
    public void setOffering(int price) { this.offering = price; }

    public int getUserId() { return userId; }

    public int getOffering() { return offering; }

    public int getAuctionId() { return auctionId; }
}
