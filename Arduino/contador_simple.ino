
const int sensorPin1 = 2;
const int sensorPin2 = 3;

bool s, r, en;
int cuenta = 0;

void setup() {
  pinMode(sensorPin1, INPUT);
  pinMode(sensorPin2, INPUT);
  Serial.begin(9600);
}

void loop() {
  s = digitalRead(sensorPin1) == HIGH;
  r = digitalRead(sensorPin2) == HIGH;

  if (s && !r)
    en = true;
  else if (s && !r)
    en = false;
  
  if (en) {
    cuenta = cuenta + 1;
  }

  Serial.println(cuenta);
  delay(1000);
}
