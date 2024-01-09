package com.example.proiect;

import android.app.AlertDialog;
import android.content.DialogInterface;
import android.content.Intent;
import android.util.Log;
import android.view.LayoutInflater;
import android.os.Bundle;
import android.view.View;
import android.widget.AdapterView;
import android.widget.EditText;
import android.widget.ListView;
import android.widget.TextView;

import androidx.activity.OnBackPressedCallback;
import androidx.appcompat.app.AppCompatActivity;

import java.util.ArrayList;

public class ShoppingList extends AppCompatActivity {
    private ProductAdapter productsAdapter;
    private ListView lvProducts;
    private TextView tvListTotal;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.shopping_list);

        lvProducts = findViewById(R.id.lvProducts);
        tvListTotal = findViewById(R.id.tvListTotal);
        productsAdapter = new ProductAdapter(this, R.layout.date_row,
                Global.lists.get(Global.currentList).getProducts());
        lvProducts.setAdapter(productsAdapter);

        setupListViewListener();
        Global.updateTotal(tvListTotal);
    }

    private void setupListViewListener() {
        lvProducts.setOnItemLongClickListener(new AdapterView.OnItemLongClickListener() {
            @Override
            public boolean onItemLongClick(AdapterView<?> adapter, View item, int pos, long id) {
                List list = Global.lists.get(Global.currentList);
                Product product = list.getProducts().get(pos);
                productsAdapter.remove(product);

                Global.updateTotal(tvListTotal);
                Global.serialize();
                return true;
            }
        });
    }

    public void onAddProduct(View v) {
        View dialogView = LayoutInflater.from(ShoppingList.this).inflate(R.layout.add_product, null);

        EditText etProductName = (EditText) dialogView.findViewById(R.id.etProductName);
        EditText etProductPrice = (EditText) dialogView.findViewById(R.id.etProductPrice);
        AlertDialog dialog = new AlertDialog.Builder(ShoppingList.this)
                .setTitle("Enter product")
                .setView(dialogView)
                .setPositiveButton("Submit", new DialogInterface.OnClickListener() {
                    @Override
                    public void onClick(DialogInterface dialog, int whichButton) {
                        String name = etProductName.getText().toString();
                        String price = etProductPrice.getText().toString();
                        productsAdapter.add(new Product(name, Float.parseFloat(price)));

                        Global.updateTotal(tvListTotal);
                        Global.serialize();
                    }
                })
                .setNegativeButton("Cancel", null)
                .create();
        dialog.show();
    }


}
