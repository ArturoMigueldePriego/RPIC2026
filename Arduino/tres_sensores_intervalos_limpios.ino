
const int sensorPin1 = 2;
const int sensorPin2 = 3;
const int sensorPin3 = 4;

unsigned long t0, t1, t2;

double d1 = 0.157,
      d2 = 0.337,
      a;

void setup() {
  pinMode(sensorPin1, INPUT);
  pinMode(sensorPin2, INPUT);
  pinMode(sensorPin3, INPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println("Iniciar experimento.");

  while(digitalRead(sensorPin1) == HIGH);
  t0 = micros();

  while(digitalRead(sensorPin2) == HIGH);
  t1 = micros() - t0;
  
  while(digitalRead(sensorPin3) == HIGH);
  t2 = micros() - t0;

  Serial.println("Fin del experimento.");

  Serial.print("t1 = ");
  Serial.println(t1);
  Serial.print("t2 = ");
  Serial.println(t2);

  a = 2.0*(d2/(t2*1e-6) - d1/(t1*1e-6))/(t2 - t1)/1e-6;
  Serial.println(a);

  delay(1000);
}
