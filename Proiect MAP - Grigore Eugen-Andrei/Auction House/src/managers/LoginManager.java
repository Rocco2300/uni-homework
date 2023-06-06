package managers;

import database.Database;
import database.Table;
import entities.User;

public class LoginManager extends Manager {
    private static LoginManager instance = null;
    User signedinUser;

    private LoginManager() {

    }

    public static LoginManager getInstance() {
        if (instance == null) {
            instance = new LoginManager();
        }

        return instance;
    }

    public boolean signin(String username, String password) {
        Table usersTable;
        try {
            usersTable = database.getTable("users");
        } catch (Exception e) {
            System.out.println("Error getting tables in LoginManager.");
            System.out.println(e.getMessage());
            return false;
        }
        User user = (User)usersTable.getRecord(new User(username, password));

        if (user != null) {
            String passwordAttempt = password;
            String correctPassword = user.getPassword();
            if (passwordAttempt.equals(correctPassword)) {
                signedinUser = user;
                return true;
            }
        }

        return false;
    }

    public boolean signup(String username, String password) {
        Table usersTable;
        try {
            usersTable = database.getTable("users");
        } catch (Exception e) {
            System.out.println("Error getting tables in LoginManager.");
            System.out.println(e.getMessage());
            return false;
        }

        User query = new User();
        query.setUsername(username);
        System.out.println(query.serialize());
        User record = (User)usersTable.getRecord(query);

        if (record != null) {
            return false;
        } else {
            usersTable.insert(new User(username, password));
            return true;
        }
    }

    public User getCurrentUser() { return signedinUser; }
}
