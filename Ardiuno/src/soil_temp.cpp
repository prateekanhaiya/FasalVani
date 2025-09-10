#include <Arduino.h>
#include <soil_temp.h>
#include <OneWire.h>
#include <DallasTemperature.h>

#define TEMP_PIN 2
OneWire onewire(TEMP_PIN);
DallasTemperature sensors(&onewire); 

void initSoilTemp(){
    sensors.begin();
}

float getSoilTemp(){
    sensors.requestTemperatures();
    return sensors.getTempCByIndex(0);
}


