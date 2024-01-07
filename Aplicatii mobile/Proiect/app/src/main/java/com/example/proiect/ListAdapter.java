package com.example.proiect;

import android.content.Context;
import android.view.LayoutInflater;
import android.view.View;
import android.view.ViewGroup;
import android.widget.TextView;
import android.widget.ArrayAdapter;

import java.util.ArrayList;

public class ListAdapter extends ArrayAdapter<List> {
    public ListAdapter(Context context, int resource, ArrayList<List> lists) {
        super(context, resource, lists);
    }

    public View getView(int position, View convertView, ViewGroup parent) {
        View currentView = convertView;
        if (currentView == null) {
            currentView = LayoutInflater.from(getContext()).inflate(R.layout.date_row, parent, false);
        }

        List list = getItem(position);

        TextView tvDate = currentView.findViewById(R.id.tvDate);
        TextView tvTotal = currentView.findViewById(R.id.tvTotal);

        tvDate.setText(list.getDate());
        tvTotal.setText(Float.toString(list.getTotal()));

        return currentView;
    }
}
