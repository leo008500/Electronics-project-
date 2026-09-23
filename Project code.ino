
const int ldrPin = 34;
const int ledPin = 2;

void setup() {
  Serial.begin(115200);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int lightValue = analogRead(ldrPin);

  Serial.print("Light Value: ");
  Serial.println(lightValue);

  if (lightValue < 1500) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }

  delay(1000);
}
