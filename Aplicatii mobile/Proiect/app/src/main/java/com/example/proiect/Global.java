package com.example.proiect;

import android.content.Context;
import android.content.ContextWrapper;
import android.widget.TextView;

import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.util.ArrayList;

public class Global {
    public static int currentList = 0;
    public static ArrayList<List> lists = new ArrayList<>();
    private static ContextWrapper contextWrapper = null;

    public static void setContextWrapper(ContextWrapper contextWrapper) {
        if (Global.contextWrapper != null) {
            return;
        }

        Global.contextWrapper = contextWrapper;
    }

    public static void updateTotal(TextView tv) {
        float total = 0.0f;
        ArrayList<Product> products = lists.get(currentList).getProducts();
        for (int i = 0; i < products.size(); i++) {
            total += products.get(i).getPrice();
        }
        lists.get(currentList).setTotal(total);
        tv.setText(Float.toString(total));
    }

    public static void serialize() {
        if (contextWrapper == null) {
            return;
        }

        try {
            FileOutputStream fileOutStream = contextWrapper.openFileOutput("data.txt", Context.MODE_PRIVATE);
            ObjectOutputStream objectOutputStream = new ObjectOutputStream(fileOutStream);

            objectOutputStream.writeObject(lists);

        } catch (Exception e) {
            e.printStackTrace();
        }
    }

    public static void deserialize() {
        if (contextWrapper == null) {
            return;
        }

        try {
            FileInputStream fileInStream = contextWrapper.openFileInput("data.txt");
            ObjectInputStream objectInputStream = new ObjectInputStream(fileInStream);

            lists = (ArrayList<List>) objectInputStream.readObject();

        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
