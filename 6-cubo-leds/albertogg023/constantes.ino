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

void operarColumna(int columna, boolean operacion){
  digitalWrite(columna, operacion);
  for(int i = f1; i<=f5; i++)
    digitalWrite(i,operacion);
}

void aleatorio(int tiempo = 200){
  int rf = random(f1, f5+1);
  int rc = random(f1, c4+1);
  digitalWrite(rf, HIGH);
  digitalWrite(rc,HIGH);
  delay(tiempo);
  digitalWrite(rf, LOW);
  digitalWrite(rc, LOW);  
  delay(tiempo);
}

void setup() {  
  for(int i =0; i<9;i++)
    pinMode(i,OUTPUT);
  
}

void loop(){
  for(int i = f1; i<=f5;i++){
    operarFila(i, true);
    delay(500);
    operarFila(i, false);
  }

  for(int i = c1; i<=c4;i++){
    operarColumna(i, true);
    delay(200);
    operarColumna(i, false);
  }

  for(int i = 0; i<=10;i++){
    aleatorio();
  }
}
