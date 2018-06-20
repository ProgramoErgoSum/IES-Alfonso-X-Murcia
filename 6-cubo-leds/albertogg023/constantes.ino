const int f1 = 0;
const int f2 = 1;
const int f3 = 2;
const int f4 = 3;
const int f5 = 4;

const int c1 = 5;
const int c2 = 6;
const int c3 = 7;
const int c4 = 8; 
  

void operarLed(int fila, int columna, boolean operacion){
  digitalWrite(fila, operacion);
  digitalWrite(columna,operacion);
}


void operarFila(int fila, boolean operacion){
  digitalWrite(fila, operacion);
  for(int i = c1; i<=c4; i++)
  digitalWrite(i,operacion);
}


void setup() {  
  for(int i =0; i<9;i++)
    pinMode(i,OUTPUT);
    
 operarFila(f1,true);
 delay(500);
 operarFila(f1,false);
}

void loop(){
 
}
