package com.example.adapterdemo;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.Adapter;
import android.widget.AdapterView;
import android.widget.ArrayAdapter;
import android.widget.ListView;
import android.widget.TextView;
import android.widget.Toast;

import org.w3c.dom.Text;

import java.util.List;

public class MainActivity extends AppCompatActivity implements  AdapterView.OnItemClickListener{
        ListView l;
        String[] days={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        l = (ListView) findViewById(R.id.list);
        ArrayAdapter<String> adapter=new ArrayAdapter(this, android.R.layout.simple_list_item_1, days);
        l.setAdapter(adapter);
        l.setOnItemClickListener(this);
    }

    private ArrayAdapter<String> getAdapter(ArrayAdapter<String> adapter) {
        return adapter;
    }

    @Override
    public void onItemClick(AdapterView<?> parent, View view, int i, long id) {
        TextView temp = (TextView) view;
        Toast.makeText(this, temp.getText() + " " + i, Toast.LENGTH_LONG).show();
    }

}
