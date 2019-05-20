int piezo = 10;

void setup() {
  Serial.begin(9600);
  pinMode(piezo, OUTPUT);
}

void loop() {
  int sensorValue = analogRead(A1);
  Serial.println(sensorValue);
  tone(piezo, sensorValue, 200);
  delay(200);

}
