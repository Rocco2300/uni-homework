package entities;

public class BidListing implements IListing {
    private int bidId;
    private String itemName;
    private String ownerName;
    private int bid;

    public BidListing(int bidId, String itemName, String ownerName, int bid) {
        this.bidId = bidId;
        this.itemName = itemName;
        this.ownerName = ownerName;
        this.bid = bid;
    }

    @Override
    public String getFormatterListing() {
        String res = "";
        res += String.format("%-20s", itemName);
        res += " ";
        res += String.format("%-20s", ownerName);
        res += " ";
        res += String.format("%-20s", Integer.toString(bid));
        res += " ";
        return res;
    }

    @Override
    public int getId() {
        return bidId;
    }
}
