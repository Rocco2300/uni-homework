package com.example.proiect;

import android.os.Parcel;
import android.os.Parcelable;

import androidx.annotation.NonNull;

import java.util.ArrayList;

public class List implements Parcelable {
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

    protected List(Parcel in) {
        date = in.readString();
        total = in.readFloat();
        products = in.readArrayList(null);
    }

    public static final Creator<List> CREATOR = new Creator<List>() {
        @Override
        public List createFromParcel(Parcel in) {
            return new List(in);
        }

        @Override
        public List[] newArray(int size) {
            return new List[size];
        }
    };

    public String getDate() {
        return this.date;
    }

    public float getTotal() {
        return this.total;
    }

    public ArrayList<Product> getProducts() {
        return this.products;
    }

    @Override
    public int describeContents() {
        return 0;
    }

    @Override
    public void writeToParcel(Parcel dest, int flags) {
        dest.writeString(date);
        dest.writeFloat(total);
        dest.writeList(products);
    }
}
