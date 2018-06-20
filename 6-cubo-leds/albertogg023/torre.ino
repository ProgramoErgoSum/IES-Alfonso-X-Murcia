void setup() {
  pinMode(0, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  
  
 
}

void loop() {
  for(int i =0; i<5;i++)
    {
      digitalWrite(i,HIGH);
      for(int z = 5; z<9;z++)
        {
          digitalWrite(z, HIGH);
          delay(500);
          digitalWrite(z, LOW);
          
        }
        digitalWrite(i,LOW);
        delay(500);
    }
    
  
}
