package com.example.proiect;

import android.content.Context;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.TextView;
import android.widget.ArrayAdapter;

import java.util.ArrayList;

public class ProductAdapter extends ArrayAdapter<Product> {
    public ProductAdapter(Context context, int resource, ArrayList<Product> lists) {
        super(context, resource, lists);
    }

    public View getView(int position, View convertView, ViewGroup parent) {
        View currentView = convertView;
        if (currentView == null) {
            currentView = LayoutInflater.from(getContext()).inflate(R.layout.product_row, parent, false);
        }

        Product product = getItem(position);

        TextView tvName = currentView.findViewById(R.id.tvName);
        TextView tvPrice = currentView.findViewById(R.id.tvPrice);

        tvName.setText(product.getName());
        tvPrice.setText(Float.toString(product.getPrice()));

        return currentView;
    }
}
