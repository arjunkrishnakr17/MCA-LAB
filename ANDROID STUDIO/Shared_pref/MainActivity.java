package com.example.sample;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.content.SharedPreferences;
import android.os.Bundle;
import android.view.View;
import android.widget.EditText;
import android.widget.Toast;

public class MainActivity extends AppCompatActivity {

    EditText name,pass;
    String w="arjun",q="123";
    SharedPreferences sp;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        sp=getSharedPreferences("my_pref",MODE_PRIVATE);
    }
    public void verify(View v)
    {
        if(v.getId()==R.id.loginbutton)
        {
            name=(EditText)findViewById(R.id.username);
            pass=(EditText)findViewById(R.id.password);
            String a=name.getText().toString();
            String b=pass.getText().toString();
//            if ((a.equals(w))&&(b.equals(q)))
//            {
//                Toast toast;
//                Toast.makeText(this,"login success",Toast.LENGTH_LONG).show();
//            }
//            else
//            {
//                Toast.makeText(this,"login not success",Toast.LENGTH_LONG).show();
//            }
            SharedPreferences.Editor editor=sp.edit();
            editor.putString("name",a);
            editor.putString("pass",b);
            editor.apply();
            Intent intent=new Intent(this,MainActivity2.class);
            startActivity(intent);
        }
    }
}
