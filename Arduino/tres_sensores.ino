
const int sensorPin1 = 2;
const int sensorPin2 = 3;
const int sensorPin3 = 4;

int sensorState1 = 0;
int sensorState2 = 0;
int sensorState3 = 0;

void setup() {
  pinMode(sensorPin1, INPUT);
  pinMode(sensorPin2, INPUT);
  pinMode(sensorPin3, INPUT);
  Serial.begin(9600);
}

void loop() {
  sensorState1 = digitalRead(sensorPin1);
  sensorState2 = digitalRead(sensorPin2);
  sensorState3 = digitalRead(sensorPin3);

  Serial.print(sensorState1);
  Serial.print(sensorState2);
  Serial.println(sensorState3);
  
  delay(1000);
}
