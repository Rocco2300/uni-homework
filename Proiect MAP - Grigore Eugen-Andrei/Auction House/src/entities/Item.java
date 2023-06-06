package entities;

import java.util.Arrays;
import java.util.List;

public class Item implements IEntity {
    private int itemId;
    private int userId;
    private String name;

    public Item() {
        this.itemId = -1;
        this.userId = -1;
        this.name = "";
    }

    public Item(int itemId, int userId, String name) {
        this.itemId = itemId;
        this.userId = userId;
        this.name = name;
    }

    @Override
    public String serialize() {
        String res = "";
        res += Integer.toString(itemId);
        res += ",";
        res += Integer.toString(userId);
        res += ",";
        res += name;
        return res;
    }

    @Override
    public void deserialize(String line) {
        List<String> tokens;
        tokens = Arrays.asList(line.split(","));

        this.itemId = Integer.parseInt(tokens.get(0));
        this.userId = Integer.parseInt(tokens.get(1));
        this.name = tokens.get(2);
    }

    @Override
    public boolean equals(IEntity other) {
        Item item = (Item)other;

        if (itemId == item.itemId ||
            userId == item.userId) {
            return true;
        }

        return false;
    }

    @Override
    public boolean exact(IEntity query) {
        Item item = (Item)query;

        if (itemId == item.itemId &&
            userId == item.userId &&
            name.equals(item.name)) {
            return true;
        }

        return false;
    }

    @Override
    public void printFields() {
        System.out.print(itemId + " ");
        System.out.print(userId + " ");
        System.out.print(name + "\n");
    }

    @Override
    public int getId() { return itemId; }
    @Override
    public String getEntityName() { return "item"; }

    @Override
    public void setId(int id) { this.itemId = id; }
    public void setUserId(int id) { this.userId = id; }
    public void setName(String name) { this.name = name; }

    public String getName() { return name; }
}
