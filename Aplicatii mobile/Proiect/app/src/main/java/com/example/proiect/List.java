package com.example.proiect;

import java.util.ArrayList;

public class List {
    private String date;
    private float total;
    private ArrayList<Product> products;

    public List(String date, ArrayList<Product> products) {
        this.date = date;
        this.products = products;

        total = 0.0f;
        if (products == null) {
            return;
        }

        for (int i = 0; i < products.size(); i++) {
            total += this.products.get(i).getPrice();
        }
    }

    public String getDate() {
        return this.date;
    }

    public float getTotal() {
        return this.total;
    }

    public ArrayList<Product> getProducts() {
        return this.products;
    }
}
