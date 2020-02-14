const int sensorPin = 3;

void setup() {
  Serial.begin(9600);
  pinMode(sensorPin,INPUT_PULLUP);
}

void loop() {
  int value = digitalRead(3);
  Serial.println(value*100);
  delay(10);
}
