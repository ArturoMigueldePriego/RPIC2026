
const int sensorPin1 = 2;
const int sensorPin2 = 3;
const int sensorPin3 = 4;

void setup() {
  pinMode(sensorPin1, INPUT);
  pinMode(sensorPin2, INPUT);
  pinMode(sensorPin3, INPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println("Esperando activación del primer sensor...");
  while(digitalRead(sensorPin1) == HIGH);

  Serial.println("Primer sensor activado.");
  Serial.println("Esperando activación del segundo sensor...");
  while(digitalRead(sensorPin2) == HIGH);

  Serial.println("Segundo sensor activado.");
  Serial.println("Esperando activación del tercer sensor...");
  while(digitalRead(sensorPin3) == HIGH);
  Serial.println("Tercer sensor activado.");
  Serial.println("Fin del experimento.");

  delay(1000);
}
