int bombillo = 13;
int bombi = 9;
int bo = 7;
int espera = 200;
int espe = 555;

void setup() {
  // put your setup code here, to run once:
  pinMode(bombillo, OUTPUT);
  pinMode(bombi, OUTPUT);
  pinMode(bo, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(bombillo, HIGH);
  digitalWrite(bombi, LOW);
  digitalWrite(bo, HIGH);

  delay(espera * 2);
  
  digitalWrite(bombillo, LOW);
  digitalWrite(bombi, HIGH);
  digitalWrite(bo, LOW);


  delay(espe);
  
}
