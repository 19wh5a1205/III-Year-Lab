package com.example.myapplication1;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.TextView;

import androidx.appcompat.app.AppCompatActivity;

public class MainActivity extends AppCompatActivity {
    TextView tv;
    Button b;
    EditText et;
    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        tv = (TextView) findViewById(R.id.textView);
        b = (Button) findViewById(R.id.button);
        et = (EditText) findViewById(R.id.EditText);
        b.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                String st = et.getText().toString();
                tv.setText("Hello " + st);
            }
        });
    }
}