package entities;

import java.util.Arrays;
import java.util.List;

public class User implements IEntity {
    private int userId;
    private String username;
    private String password;

    public User() {
        this.userId = -1;
        this.username = "";
        this.password = "";
    }

    public User(String username, String password) {
        this.userId = -1;
        this.username = username;
        this.password = password;
    }

    @Override
    public String serialize() {
        String res = "";
        res += Integer.toString(userId);
        res += ",";
        res += username;
        res += ",";
        res += password;
        return res;
    }

    @Override
    public void deserialize(String line) {
        List<String> tokens;
        tokens = Arrays.asList(line.split(","));

        this.userId = Integer.parseInt(tokens.get(0));
        this.username = tokens.get(1);
        this.password = tokens.get(2);
    }

    @Override
    public boolean equals(IEntity other) {
        User user = (User)other;
        if (username.equals(user.username) ||
            userId == user.userId) {
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
        System.out.print(userId + " ");
        System.out.print(username + " ");
        System.out.print(password + "\n");
    }

    @Override
    public int getId() { return userId; }

    public String getPassword() { return password; }
    @Override
    public String getEntityName() { return "user"; }

    @Override
    public void setId(int id) { this.userId = id; }
    public void setUsername(String username) { this.username = username; }
    public void setPassword(String password) { this.password = password; }

    public String getUsername() { return username; }
}
