int IN1 = 8;     // Controle de direção 1 
int IN2 = 9;     // Controle de direção 2  
int ENA = 10;    // Controle de velocidade (PWM)

void setup() {
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(ENA, OUTPUT);
  
  // Inicia com motor parado
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  analogWrite(ENA, 0);
}

void loop() {
  // Sentido horário (frente)
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  
  // Aceleração progressiva: 0 → 255
  for(int velocidade = 50; velocidade <= 255; velocidade += 5) {
    analogWrite(ENA, velocidade);
    delay(100);  // Tempo entre incrementos
  }
  
  // Mantém na velocidade máxima por 2 segundos
  delay(2000);
  
  // Desaceleração progressiva: 255 → 0
  for(int velocidade = 255; velocidade >= 0; velocidade -= 5) {
    analogWrite(ENA, velocidade);
    delay(100);
  }
  
  // Pausa de 1 segundo
  delay(1000);
  
  // Sentido anti-horário (ré)
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  
  // Aceleração progressiva no sentido inverso
  for(int velocidade = 50; velocidade <= 255; velocidade += 5) {
    analogWrite(ENA, velocidade);
    delay(100);
  }
  
  // Mantém na velocidade máxima por 2 segundos
  delay(2000);
  
  // Desaceleração progressiva
  for(int velocidade = 255; velocidade >= 0; velocidade -= 5) {
    analogWrite(ENA, velocidade);
    delay(100);
  }
  
  // Pausa final de 2 segundos antes de repetir
  delay(2000);
}