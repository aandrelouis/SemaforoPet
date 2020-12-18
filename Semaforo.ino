int verde = 11, amarelo = 12, vermelho = 13;
int modo = 0;

void setup(){
  // Configura os pinos dos LEDs como saída
  pinMode(verde, OUTPUT); // LED verde
  pinMode(amarelo, OUTPUT); // LED amarelo
  pinMode(vermelho, OUTPUT); // LED vermelho
  pinMode(4, INPUT); 
}

void loop(){
  if (digitalRead(4) == HIGH || modo == 1){
    
    digitalWrite(verde, HIGH);
    digitalWrite(amarelo, LOW);
    digitalWrite(vermelho, LOW);
    delay(4000);
    
	digitalWrite(verde, LOW);
    digitalWrite(amarelo, HIGH);
    digitalWrite(vermelho, LOW);
    delay(1000);
    
    digitalWrite(verde, LOW);
    digitalWrite(amarelo, LOW);
    digitalWrite(vermelho, HIGH);
    delay(3000);
    
    modo = 1;
  }
}