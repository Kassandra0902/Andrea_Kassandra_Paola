#include <Servo.h>
int datos_in;
int A = 0;
Servo Servo_1;
Servo Servo_2;
//float temp;
//int pinLM35 = 0;
//int Led=6;

void setup(){
  Serial.begin(9600);
  //pinMode(Led, OUTPUT);
  Servo_1.attach(6);
  Servo_2.attach(5);
}

void loop ()
{
  if (Serial.available() > 0){
    datos_in = Serial.read();
    Serial.println((char)datos_in);
    
    if((char)datos_in == 'B'){
       //digitalWrite(Led, HIGH);
      Servo_1.write(0);
      Servo_2.write(90);
      }
    else if((char)datos_in=='C'){
      //digitalWrite(Led, LOW);
     Servo_1.write(180);
     Servo_2.write(90);
  }
    else if((char)datos_in=='D'){
    
    Servo_2.write(0);
    Servo_1.write(90);
    }
    else if((char)datos_in=='E'){
    Servo_2.write(180);
    Servo_1.write(90);
      }
   else {
    Servo_1.write(90);
    Servo_2.write(90);
    }
   
}
  }
