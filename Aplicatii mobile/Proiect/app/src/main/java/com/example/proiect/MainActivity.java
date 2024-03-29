package com.example.proiect;

import android.app.DatePickerDialog;
import android.content.ContextWrapper;
import android.content.Intent;
import android.os.Bundle;
import android.os.FileUtils;
import android.view.View;
import android.widget.AdapterView;
import android.widget.ListView;
import android.widget.TextView;

import androidx.appcompat.app.AppCompatActivity;

import java.io.File;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.text.DateFormat;
import java.util.ArrayList;
import java.util.Calendar;

public class MainActivity extends AppCompatActivity
        implements DatePickerDialog.OnDateSetListener {
    private ListAdapter listsAdapter;
    private ListView lvLists;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        Global.setContextWrapper(this);
        Global.deserialize();

        lvLists = findViewById(R.id.lvLists);
        listsAdapter = new ListAdapter(this, R.layout.date_row, Global.lists);
        lvLists.setAdapter(listsAdapter);

        setupListViewListener();
        listsAdapter.notifyDataSetChanged();
    }

    @Override
    protected void onResume() {
        super.onResume();

        listsAdapter.notifyDataSetChanged();
    }

    private void setupListViewListener() {
        lvLists.setOnItemClickListener(new AdapterView.OnItemClickListener() {
            @Override
            public void onItemClick(AdapterView<?> parent, View view, int position, long id) {
                Intent intent = new Intent(MainActivity.this, ShoppingList.class);
                Global.currentList = position;
                startActivity(intent);
            }
        });
        lvLists.setOnItemLongClickListener(new AdapterView.OnItemLongClickListener() {
            @Override
            public boolean onItemLongClick(AdapterView<?> adapter, View item, int pos, long id) {
                List list = Global.lists.get(pos);
                listsAdapter.remove(list);
                Global.serialize();
                return true;
            }
        });
    }

    public void onAddList(View v) {
        DatePicker datePicker = new DatePicker();
        datePicker.show(getSupportFragmentManager(), "Pick date");
    }

    @Override
    public void onDateSet(android.widget.DatePicker view, int year, int month, int dayOfMonth) {
        Calendar calendar = Calendar.getInstance();
        calendar.set(Calendar.YEAR, year);
        calendar.set(Calendar.MONTH, month);
        calendar.set(Calendar.DAY_OF_MONTH, dayOfMonth);
        String selectedDate = DateFormat.getDateInstance(DateFormat.FULL).format(calendar.getTime());

        listsAdapter.add(new List(selectedDate, new ArrayList<Product>()));
        Global.serialize();
    }
}
