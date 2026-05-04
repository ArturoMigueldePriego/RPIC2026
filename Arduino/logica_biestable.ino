
const int sensorPin1 = 2;
const int sensorPin2 = 3;

bool s, r, q, qn;

void setup() {
  pinMode(sensorPin1, INPUT);
  pinMode(sensorPin2, INPUT);
  q = false;
  qn = true;
  Serial.begin(9600);
}

void loop() {
  s = digitalRead(sensorPin1) == HIGH;
  r = digitalRead(sensorPin2) == HIGH;

  if (s && !r){
    q = true;
    qn = false;
  }
  else if (!s && r){
    q = false;
    qn = true;
  }
  else if (s && !s){
    q = false;
    qn = false;
  }

  Serial.print("s r q q' = ");
  Serial.print(s);
  Serial.print(" ");
  Serial.print(r);
  Serial.print(" ");
  Serial.print(q);
  Serial.print(" ");
  Serial.println(qn);

  delay(1000);
}
