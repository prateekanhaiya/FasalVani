#include <Arduino.h>
#include <soil_moisture.h>

void setup() {
  initSoilMoisture();
  Serial.begin(9600);
}

void loop() {
  Serial.print("Mositure:");
  Serial.print(getSoilMoisture());
  Serial.println("%");
  delay(500);
}
