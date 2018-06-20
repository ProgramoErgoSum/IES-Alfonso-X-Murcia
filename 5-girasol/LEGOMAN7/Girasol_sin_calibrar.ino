#include <Servo.h>

Servo servomotor1;
Servo servomotor2;
int ldr1 = 0;
int ldr2 = 0;
int ldr3 = 0;
int ldr4 = 0;
int x = 90;
int y = 90; 

void setup() {
  servomotor1.attach(10);
  servomotor2.attach(11);
  Serial.begin(9600);

}

void loop() {
  delay(1);
  ldr2 = analogRead(A0);
  ldr1 = analogRead(A1);
  Serial.print("ldr1 ");
  Serial.println(ldr1);
  Serial.print("ldr2 ");
  Serial.println(ldr2);
  delay(1);
  if (ldr1>ldr2){
    servomotor1.write(x);
    x-=1;
  }
  if(ldr1<ldr2){
    servomotor1.write(x);
    x+=1;
  }
  if(ldr1==ldr2){
    servomotor1.write(x);
  }
  ldr4 = analogRead(A2);
  ldr3 = analogRead(A3);
  Serial.print("ldr3 ");
  Serial.println(ldr3);
  Serial.print("ldr4 ");
  Serial.println(ldr4);
  delay(1);
  if (ldr3>ldr4){
    servomotor2.write(y);
    y-=1;
  }
  if(ldr3<ldr4){
    servomotor2.write(y);
    y+=1;
  }
  if (ldr3==ldr4){
    servomotor2.write(y);
  }
  Serial.print("x ");
  Serial.println(x);
  Serial.print("y ");
  Serial.println(y);
  delay(1);
    
}
  
  

