void setup() {
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {
    String data = Serial.readStringUntil('\n');

    int commaIndex = data.indexOf(',');
    if (commaIndex > 0) {
      float temperature = data.substring(0, commaIndex).toFloat();
      float humidity = data.substring(commaIndex + 1).toFloat();

      Serial.print("Temp: ");
      Serial.print(temperature);
      Serial.print(" °C | Humidity: ");
      Serial.println(humidity);
    }
  }
}
