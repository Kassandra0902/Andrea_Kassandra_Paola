byte datos_in;
int A = 0;
float temp;
int pinLM35 = 0;

void setup(){
  Serial.begin(9600);
}

void loop ()
{
  if (Serial.available() > 0){
    datos_in = Serial.read();
    if(datos_in == 's'){
      A = 1;
    }
  }

  if(A == 1 ) {
   temp = analogRead(pinLM35);
  // temp = (5.0*temp*100)/1024.0;
   Serial.println(temp);
   //Serial.print("\n");
   delay(1000);
  } else {
    Serial.write("Arduino 1 ");
    delay(1000);
  }
  
}
