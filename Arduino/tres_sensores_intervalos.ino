
const int sensorPin1 = 2;
const int sensorPin2 = 3;
const int sensorPin3 = 4;

unsigned long t0, t1, t2;

void setup() {
  pinMode(sensorPin1, INPUT);
  pinMode(sensorPin2, INPUT);
  pinMode(sensorPin3, INPUT);

  Serial.begin(9600);
}

void loop() {
  Serial.println("Esperando activación del primer sensor...");
  while(digitalRead(sensorPin1) == HIGH);
  t0 = micros();

  Serial.println("Primer sensor activado.");
  Serial.println("Esperando activación del segundo sensor...");
  while(digitalRead(sensorPin2) == HIGH);
  t1 = micros() - t0;

  Serial.println("Segundo sensor activado.");
  Serial.println("Esperando activación del tercer sensor...");
  while(digitalRead(sensorPin3) == HIGH);
  t2 = micros() - t0;

  Serial.println("Tercer sensor activado.");
  Serial.print("t1 = ");
  Serial.println(t1);
  Serial.print("t2 = ");
  Serial.println(t2);
  Serial.println("Fin del experimento.");

  delay(1000);
}
