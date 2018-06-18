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
  /*
   randNumberX = random(0,4);
   randNumberY = random(4,9);
 
  digitalWrite(randNumberX,1); 
  digitalWrite(randNumberY,1);
  
  delay(100);
  */
  
  giro_columna();
}








void giro_columna(){
  for(int i=5; i<9; i++){
    encender_columna(i);
    delay(100);
    apagar_todo();
  }
}


/**
* Esta función enciende la columna pasada por parámetro
* @input columna:Integer
* @output null
*/
void encender_columna(int columna){
  
  for(int i=0; i<5; i++)
    digitalWrite(i ,HIGH);
  
  digitalWrite(columna ,HIGH);
}

