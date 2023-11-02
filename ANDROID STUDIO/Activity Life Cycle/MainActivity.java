package com.example.exp2;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        Toast.makeText(getApplicationContext(), "onCreateCalled", Toast.LENGTH_LONG).show();

    }

    protected void onStart() {
        super.onStart();
        Toast.makeText(getApplicationContext(), "onstartcalled", Toast.LENGTH_LONG).show();

    }

    @Override
    public void onRestart()
    {
        super.onRestart();
        Toast.makeText(getApplicationContext(), "onrestartcalled", Toast.LENGTH_LONG).show();
    }
    public void onResume()
    {
        super.onResume();
        Toast.makeText(getApplicationContext(), "onresumecalled", Toast.LENGTH_LONG).show();
    }
    public void onStop()
    {
        super.onStop();
        Toast.makeText(getApplicationContext(), "onstopcalled", Toast.LENGTH_LONG).show();
    }
    public void onDestroy()
    {
        super.onDestroy();
        Toast.makeText(getApplicationContext(), "ondestroycalled", Toast.LENGTH_LONG).show();
    }



}
