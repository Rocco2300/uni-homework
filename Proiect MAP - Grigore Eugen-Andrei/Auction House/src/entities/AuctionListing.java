package entities;

public class AuctionListing implements IListing {
    private int auctionId;
    private String itemName;
    private String ownerName;
    private int price;
    private String bidderName;

    public AuctionListing(int auctionId, String item, String owner, int price, String bidder) {
        this.auctionId = auctionId;
        this.itemName = item;
        this.ownerName = owner;
        this.price = price;
        this.bidderName = bidder;
    }

    @Override
    public String getFormatterListing() {
        String res = "";
        res += String.format("%-20s", itemName);
        res += " ";
        res += String.format("%-20s", ownerName);
        res += " ";
        res += String.format("%-20s", Integer.toString(price));
        res += " ";
        res += String.format("%-20s", bidderName);
        res += " ";
        return res;
    }

    @Override
    public int getId() { return auctionId; }
}
