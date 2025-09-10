#include <Arduino.h>
#include <soil_moisture.h>
#include <soil_temp.h>
#include <comms.h>



void setup(){
  initSoilMoisture();
  initSoilTemp();
  initComms();
}

void loop(){
  sendData(getSoilMoisture(), getSoilTemp());
  delay(500);
}
