
const int sensorPin1 = 2;
const int sensorPin2 = 3;
const int sensorPin3 = 4;
const int sensorPin4 = 5;
const int sensorPin5 = 6;
const int sensorPin6 = 7;

unsigned long t0, t1, t2, t3, t4, t5;

void setup() {
  pinMode(sensorPin1, INPUT);
  pinMode(sensorPin2, INPUT);
  pinMode(sensorPin3, INPUT);
  pinMode(sensorPin4, INPUT);
  pinMode(sensorPin5, INPUT);
  pinMode(sensorPin6, INPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println("Iniciar experimento.");

  while(digitalRead(sensorPin1) == HIGH);
  t0 = micros();

  while(digitalRead(sensorPin2) == HIGH);
  t1 = micros();

  while(digitalRead(sensorPin3) == HIGH);
  t2 = micros();

  while(digitalRead(sensorPin4) == HIGH);
  t3 = micros();

  while(digitalRead(sensorPin5) == HIGH);
  t4 = micros();

  while(digitalRead(sensorPin6) == HIGH);
  t5 = micros();

  Serial.println("Fin del experimento.");

  Serial.print("t1 = ");  Serial.println(t1 - t0);
  Serial.print("t2 = ");  Serial.println(t2 - t0);
  Serial.print("t3 = ");  Serial.println(t3 - t0);
  Serial.print("t4 = ");  Serial.println(t4 - t0);
  Serial.print("t5 = ");  Serial.println(t5 - t0);

  delay(1000);
}
