
int randNumberX = 0, randNumberY = 0;

void setup() {
  for(int i=0; i<9; i++){
    pinMode(i, OUTPUT);
  }
}

void apagar_todo(){
  for (int x=0; x<9; x++){
   digitalWrite(x,0);
  }
}

void giro_columna(){
  for(int i=5; i<9; i++){
    encender_columna(i);
    delay(100);
    apagar_todo();
  }
}

void encender_columna(int columna){
  for(int i=0; i<5; i++)
    digitalWrite(i ,HIGH);
  
  digitalWrite(columna ,HIGH);
}

void loop(){
  giro_columna();
}
