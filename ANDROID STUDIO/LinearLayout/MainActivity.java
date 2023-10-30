package com.example.a4exp;

import android.app.ActionBar;
import android.graphics.Color;
import android.graphics.Typeface;
import android.os.Bundle;
import android.view.Gravity;
import android.view.ViewGroup;
import android.widget.Button;
import android.widget.LinearLayout;
import android.widget.TextView;

import androidx.appcompat.app.AppCompatActivity;

public class MainActivity extends AppCompatActivity {
    LinearLayout ll;
    TextView t;
    Button b;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        ll = new LinearLayout(this);
        t = new TextView(this);
        b = new Button(this);
        LinearLayout.LayoutParams dim=new LinearLayout.LayoutParams(ViewGroup.LayoutParams.MATCH_PARENT, ActionBar.LayoutParams.MATCH_PARENT);
        ll.setLayoutParams(dim);

        LinearLayout.LayoutParams vdim=new LinearLayout.LayoutParams(ViewGroup.LayoutParams.MATCH_PARENT, ViewGroup.LayoutParams.WRAP_CONTENT);
        vdim.setMargins(0,50,0,0);
        t.setLayoutParams(vdim);
        b.setLayoutParams(vdim);

        ll.setOrientation(LinearLayout.VERTICAL);
        ll.setVerticalGravity(Gravity.CENTER);
        t.setText("helloo");
        t.setGravity(Gravity.CENTER);
        t.setTextSize(35);
        t.setTextColor(Color.BLUE);
        t.setTypeface(Typeface.DEFAULT_BOLD);

        b.setText("hi button");
        b.setBackgroundColor(Color.YELLOW);
        ll.addView(t);
        ll.addView(b);

        setContentView(ll);
    }
}




