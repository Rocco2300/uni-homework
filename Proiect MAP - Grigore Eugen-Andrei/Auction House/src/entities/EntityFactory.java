package entities;

import entities.*;

import java.security.InvalidParameterException;

public class EntityFactory {
    public EntityFactory() {}

    public IEntity getEntityByTableName(String tableName) {
        switch (tableName) {
            case "auction":
                return new Auction();
            case "bid":
                return new Bid();
            case "items":
                return new Item();
            case "users":
                return new User();
            default:
                throw new InvalidParameterException("Invalid table name.");
        }
    }

}
