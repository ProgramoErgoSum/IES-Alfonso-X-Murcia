void setup() {
  // filas de la torre
}
  const int f1 = 0;
  const int f2 = 1;
  const int f3 = 2;
  const int f4 = 3;
  const int f5 = 4;
//columnas de la torre
  const int c1 = 5;
  const int c2 = 6;
  const int c3 = 7;
  const int c4 = 8; 

  /**
   * enciende un led concreto dado la fila y la columna
   */
void encenderLed(int fila, int columna){
  digitalWrite(fila, HIGH);
  digitalWrite(colunna, HIGH);
}

void setup() {
 for(int i=0; i<9; i++){
  encenderLed(f4, c2)
 }
 /**
   * Apagar un led concreto dado la fila y la columna
   */
void apagarLed(int fila, int columna){
  digitalWrite(fila, LOW);
  digitalWrite(colunna, LOW);
}

void setup() {
 for(int i=0; i<9; i++){
  encenderLed(f4, c2)
 }

}
