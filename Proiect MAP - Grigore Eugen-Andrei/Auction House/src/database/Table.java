package database;

import entities.EntityFactory;
import entities.IEntity;

import java.io.*;
import java.security.InvalidParameterException;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class Table {
    private int freeId = 1;
    private String filePath;
    private String tableName;
    private List<IEntity> data;
    private List<String> header;
    private EntityFactory entityFactory;

    public Table (String tableName, String filePath) {
        this.filePath = filePath;
        this.tableName = tableName;

        data = new ArrayList<IEntity>();
        header = new ArrayList<String>();
        entityFactory = new EntityFactory();

        loadTable(filePath);
    }

    private void loadTable(String filePath) {
        try {
            InputStream fstream = new FileInputStream(filePath);
            BufferedReader br = new BufferedReader(new InputStreamReader(fstream));

            String strLine;
            Boolean isFirst = true;
            while ((strLine = br.readLine()) != null) {
                if (isFirst) {
                    header = Arrays.asList(strLine.split(","));
                    isFirst = false;
                    continue;
                }

                IEntity entity = entityFactory.getEntityByTableName(tableName);
                entity.deserialize(strLine);
                freeId = (entity.getId() >= freeId) ? entity.getId() + 1 : freeId;
                data.add(entity);
            }

            br.close();
        } catch (Exception e) {
            System.out.println("Error opening database");
            System.out.println(e.getMessage());
        }
    }

    public void saveTable() {
        try {
            OutputStream fstream = new FileOutputStream(filePath);
            BufferedWriter br = new BufferedWriter(new OutputStreamWriter(fstream));
            PrintWriter pw = new PrintWriter(br);

            for (int i = 0; i < header.size(); i++) {
                pw.print(header.get(i) + (i == header.size() - 1 ? "" : ","));
            }
            pw.print("\n");

            for (IEntity entity : data) {
                pw.println(entity.serialize());
            }

            br.close();
        } catch (Exception e) {
            System.out.println("Error opening database");
            System.out.println(e.getMessage());
        }
    }

    // Todo make throw not existing record
    public void delete(IEntity query) {
        for (IEntity entity : data) {
            if (entity.exact(query)) {
                data.remove(entity);
                return;
            }
        }
    }

    public IEntity getExact(IEntity query) {
        for (IEntity entity : data) {
            if (entity.exact(query)) {
                return entity;
            }
        }
        return null;
    }

    public IEntity getRecord(IEntity query) {
        for (IEntity entity : data) {
            if (entity.equals(query)) {
                return entity;
            }
        }
        return null;
    }

    public List<IEntity> getRecords(IEntity query) {
        List<IEntity> ret = new ArrayList<>();

        for (IEntity entity : data) {
            if (entity.equals(query)) {
                ret.add(entity);
            }
        }

        return ret;
    }

    public List<IEntity> getRecords() {
        return data;
    }

    public void insert(IEntity entity) {
        String entityName = entity.getEntityName();
        if (!tableName.contains(entityName)) {
            throw new InvalidParameterException(); // TODO
        }

        entity.setId(freeId);
        freeId += 1;
        data.add(entity);
    }

    public void printAllFields() {
        for (String column : header) {
            System.out.print(column + " ");
        }
        System.out.print("\n");

        for (IEntity ent : data) {
            ent.printFields();
        }
        System.out.print("\n");
    }
}
