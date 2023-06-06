package database;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class Database {
    private String path;
    private Map<String, Table> tables;

    public Database(String path) {
        this.path = path;
        tables = new HashMap<String, Table>();
    }

    public void addTable(String name) {
        Table table = new Table(name, path + "/" + name + ".csv");
        tables.put(name, table);
    }

    public Table getTable(String name) throws NonexistentTableException {
        if (!tables.containsKey(name)) {
            throw new NonexistentTableException("Table " + name + " doesn't exist!");
        }
        return tables.get(name);
    }

    public void close() {
        for (Map.Entry<String, Table> entry : tables.entrySet()) {
            Table table = entry.getValue();
            table.saveTable();
        }
    }
}
