package com.example.sample;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.content.SharedPreferences;
import android.os.Bundle;
import android.view.View;
import android.widget.TextView;

public class MainActivity2 extends AppCompatActivity {
    TextView t;
    SharedPreferences sp;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main2);
        sp=getSharedPreferences("my_pref",MODE_PRIVATE);
        t=(TextView)findViewById(R.id.text);
        String name=sp.getString("name","");
        t.setText("name="+name);
    }
    public void previous(View v)
    {
        startActivity(new intent(this,MainActivity.class));
    }
}
