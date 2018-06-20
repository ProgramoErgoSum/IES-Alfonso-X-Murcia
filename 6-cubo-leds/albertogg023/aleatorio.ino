```
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

void apagar_todo(){
  for (int x=0; x<9; x++){
   digitalWrite(x,0);
  }
}

int randNumberX = 0, randNumberY = 0;

void loop(){
  
   randNumberX = random(0,5);
   randNumberY = random(5,9);
 
  digitalWrite(randNumberX,HIGH); 
  digitalWrite(randNumberY,HIGH);
  
   delay(100);
   
  digitalWrite(randNumberX,LOW; 
  digitalWrite(randNumberY,LOW);
  
}
```
