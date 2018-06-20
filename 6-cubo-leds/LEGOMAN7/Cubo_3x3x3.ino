void setup() {
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void apagar() {
  for(int x=1; x<=9; x++){
    digitalWrite(x, LOW);
  }
}

void apagar_todo() {
  for(int x=1; x<=13; x++){
    digitalWrite(x, LOW);
  }
}

void llenar_rl() {
  for (int x=11; x<=13; x++) {
    for (int y=1; y<=9; y++) {
      digitalWrite(x, 1);
      digitalWrite(y, 1);
      delay(50);  
    }
    digitalWrite(x, 0);
    apagar();
  }
  apagar_todo();
  for (int x=13; x>=11; x--) { 
    for (int y=9; y>=1; y--) {
      digitalWrite(x, 1);
      digitalWrite(y, 1);
      delay(50);  
    }
    digitalWrite(x, 0);
    apagar();
  }  
}

void llenar_lr() {
  int posicion1[] = {3,2,1,6,5,4,9,8,7};
  int posicion2[] = {7,8,9,4,5,6,1,2,3};
  for (int x=11; x<=13; x++) {
    for (int y=0; y<=8; y++) {
      digitalWrite(x,1);
      digitalWrite(posicion1[y],1);
      delay(50);  
    }
    digitalWrite(x, 0);
    apagar();
  apagar_todo();
  }
  for (int a=13; a>=11; a--) {
    for (int b=0; b<=8; b++) {
      digitalWrite(a,1);
      digitalWrite(posicion2[b],1);
      delay(50);  
    }
    digitalWrite(a, 0);
    apagar();
  }  
}

void llenar_dul() {
  int posicion1[] = {3,6,9,2,5,8,1,4,7};
  int posicion2[] = {7,4,1,8,5,2,9,6,3};
  for (int x=11; x<=13; x++) {
    for (int y=0; y<=8; y++) {
      digitalWrite(x,1);
      digitalWrite(posicion1[y],1);
      delay(50);  
    }
    digitalWrite(x, 0);
    apagar();
  apagar_todo();
  }
  for (int a=13; a>=11; a--) {
    for (int b=0; b<=8; b++) {
      digitalWrite(a,1);
      digitalWrite(posicion2[b],1);
      delay(50);  
    }
    digitalWrite(a, 0);
    apagar();
  }  
}

void llenar_udl() {
  int posicion1[] = {9,6,3,8,5,2,7,4,1};
  int posicion2[] = {1,4,7,2,5,8,3,6,9};
  for (int x=11; x<=13; x++) {
    for (int y=0; y<=8; y++) {
      digitalWrite(x,1);
      digitalWrite(posicion1[y],1);
      delay(50);  
    }
    digitalWrite(x, 0);
    apagar();
  apagar_todo();
  }
  for (int a=13; a>=11; a--) {
    for (int b=0; b<=8; b++) {
      digitalWrite(a,1);
      digitalWrite(posicion2[b],1);
      delay(50);  
    }
    digitalWrite(a, 0);
    apagar();
  }  
}

void llenar_dur() {
  int posicion1[] = {1,4,7,2,5,8,3,6,9};
  int posicion2[] = {7,4,1,8,5,2,9,6,3};
  for (int x=11; x<=13; x++) {
    for (int y=0; y<=8; y++) {
      digitalWrite(x,1);
      digitalWrite(posicion1[y],1);
      delay(50);  
    }
    digitalWrite(x, 0);
    apagar();
  apagar_todo();
  }
  for (int a=13; a>=11; a--) {
    for (int b=0; b<=8; b++) {
      digitalWrite(a,1);
      digitalWrite(posicion2[b],1);
      delay(50);  
    }
    digitalWrite(a, 0);
    apagar();
  }  
}

void llenar_udr() {
  int posicion1[] = {7,4,1,8,5,2,9,6,3};
  int posicion2[] = {1,4,7,2,5,8,3,6,9};
  for (int x=11; x<=13; x++) {
    for (int y=0; y<=8; y++) {
      digitalWrite(x,1);
      digitalWrite(posicion1[y],1);
      delay(50);  
    }
    digitalWrite(x, 0);
    apagar();
  apagar_todo();
  }
  for (int a=13; a>=11; a--) {
    for (int b=0; b<=8; b++) {
      digitalWrite(a,1);
      digitalWrite(posicion2[b],1);
      delay(50);  
    }
    digitalWrite(a, 0);
    apagar();
  }  
}
 
void lluvia() {
  for (int y=1; y<=9; y++) {
    int randNumber = 0;
    randNumber = random(1,9);
    digitalWrite(randNumber,1);
    for (int x=13; x>=11; x--) {
      digitalWrite(x,1);
      delay(100);
      digitalWrite(x,0);     
    }
    apagar();
  }
  apagar();
}

void lluvia_inversa() {
  for (int y=1; y<=9; y++) {
    int randNumber = 0;
    randNumber = random(1,9);
    digitalWrite(randNumber,1);
    for (int x=11; x<=13; x++){
      digitalWrite(x,1);
      delay(100);
      digitalWrite(x,0);     
    }
    apagar();
  }
  apagar();
}

void aleatorio() {
  delay(100);
  int randNumberX = 0;
    randNumberX = random(1,9);
      digitalWrite(randNumberX,1);
  int randNumberY = 0;
    randNumberY = random(11,13);
      digitalWrite(randNumberY,1);
  delay(100);
  apagar_todo();
}

void aspa() {
  int posicion[] = {1,9,2,8,3,7,4,6};
  for (int x=11; x<=13; x++) {
    digitalWrite(x,1);
  }
    for (int y=5; y<=5; y++) {
      digitalWrite(y,1);
    }
      for (int z=0; z<=7; z+=2) {
        digitalWrite(posicion[z],1);
        digitalWrite(posicion[z+1],1);
        delay(100);
        digitalWrite(posicion[z],0);
        digitalWrite(posicion[z+1],0);
      }
}

void aspa_inversa() {
  int posicion[] = {1,9,2,8,3,7,4,6};
  for (int x=11; x<=13; x++) {
    digitalWrite(x,1);
  }
    for (int y=5; y<=5; y++) {
      digitalWrite(y,1);
    }
      for (int z=7; z<=0; z-=2) {
        digitalWrite(posicion[z],1);
        digitalWrite(posicion[z+1],1);
        delay(100);
        digitalWrite(posicion[z],0);
        digitalWrite(posicion[z+1],0);
      }
}

void loop() {
for (int x=1; x<=3; x++) {
}
    llenar_rl(); 
  }
  
  for (int x=1; x<=3; x++) {
    llenar_lr(); 
  }

  for (int x=1; x<=3; x++) {
    llenar_dul();  
  }

  for (int x=1; x<=3; x++) {
    llenar_udl();  
  }

  for (int x=1; x<=3; x++) {
    llenar_dur(); 
  }

  for (int x=1; x<=3; x++) {
    llenar_udr();
  }

  for (int x=1; x<=3; x++) {
    lluvia();
  }

  for (int x=1; x<=3; x++) {
    lluvia_inversa();
  }
for (int x=1; x<=20; x++) {
    aleatorio();
  }

for (int x=1; x<=5; x++) {
    aspa();
  }
/*apagar_todo();
  delay(50);
for (int x=1; x<=5; x++) {
      aspa_inversa;
  } 
}*/





