
import database.Database;
import entities.Bid;
import managers.*;
import menu.*;

public class Main {
    public static void main(String[] args) {
        Database db = new Database(System.getProperty("user.dir") + "/database");
        db.addTable("users");
        db.addTable("auction");
        db.addTable("bid");
        db.addTable("items");

        LoginManager loginManager = LoginManager.getInstance();
        loginManager.setDatabase(db);

        AuctionManager auctionManager = AuctionManager.getInstance();
        auctionManager.setDatabase(db);

        ItemManager itemManager = ItemManager.getInstance();
        itemManager.setDatabase(db);

        BidManager bidManager = BidManager.getInstance();
        bidManager.setDatabase(db);

        MainMenu mainMenu = new MainMenu();
        LoginMenu loginMenu = new LoginMenu();
        AuctionMenu auctionMenu = new AuctionMenu();
        InventoryMenu inventoryMenu = new InventoryMenu();
        BidMenu bidMenu = new BidMenu();

        mainMenu.addSubmenu(auctionMenu);
        mainMenu.addSubmenu(inventoryMenu);
        mainMenu.addSubmenu(bidMenu);

        loginMenu.addSubmenu(mainMenu);
        loginMenu.runMenu();

        db.close();
    }
}