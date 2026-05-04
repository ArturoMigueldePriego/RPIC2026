
const int sensorPin1 = 2;
const int sensorPin2 = 3;

int a, b, s;

void setup() {
  pinMode(sensorPin1, INPUT);
  pinMode(sensorPin2, INPUT);

  Serial.begin(9600);
}

void loop() {
  a = digitalRead(sensorPin1) == HIGH;
  b = digitalRead(sensorPin2) == HIGH;

  s = !(a && b);

  Serial.print("a b s = ");
  Serial.print(a);
  Serial.print(" ");
  Serial.print(b);
  Serial.print(" ");
  Serial.println(s);

  delay(1000);
}
