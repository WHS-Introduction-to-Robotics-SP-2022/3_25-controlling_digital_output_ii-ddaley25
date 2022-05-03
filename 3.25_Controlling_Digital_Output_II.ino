 int LED1 = 3;
 int LED2 = 10;
 
 void setup(){
 pinMode(3,OUTPUT);
 pinMode(10,OUTPUT);
 
 digitalWrite(LED2,HIGH);
 delay(500);
 digitalWrite(LED2,LOW);
delay(500);

 digitalWrite(LED2,HIGH);
 delay(500);
 digitalWrite(LED2,LOW);
delay(500);

delay(1000);

digitalWrite(LED1,HIGH);
delay(250);
digitalWrite(LED1,LOW);
delay(1000);

digitalWrite(LED1,HIGH);
delay(250);
digitalWrite(LED1,LOW);
delay(1000);

digitalWrite(LED1,HIGH);
delay(250);
digitalWrite(LED1,LOW);
delay(1000);

delay(2000);}

void loop(){

digitalWrite(LED1,HIGH);
digitalWrite(LED2,HIGH);
delay(500);

digitalWrite(LED1,LOW);
digitalWrite(LED2,LOW);
delay(200);

 }
