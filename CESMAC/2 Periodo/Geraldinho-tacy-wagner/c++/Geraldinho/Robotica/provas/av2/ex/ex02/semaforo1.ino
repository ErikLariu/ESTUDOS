// C++ code //

int r1s2 = 2;
int r1s1 = 3;
int r1s0 = 4;

void setup()
{
  pinMode(r1s2, OUTPUT);
  pinMode(r1s1, OUTPUT);
  pinMode(r1s0, OUTPUT);
}

void loop()
{
  // 1 loop // 
  digitalWrite(r1s2, HIGH); // VERDE - !
  digitalWrite(r1s1, LOW);
  digitalWrite(r1s0, LOW);
  delay(15000);
  
  digitalWrite(r1s2, LOW);
  digitalWrite(r1s1, HIGH); // AMARELO - !
  delay(3000);
  
  digitalWrite(r1s1, LOW);
  digitalWrite(r1s0, HIGH);
  delay(15000);

}