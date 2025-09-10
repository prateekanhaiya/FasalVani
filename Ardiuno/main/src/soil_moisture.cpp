#include <Arduino.h>
#include <soil_moisture.h>

#define SOIL_PIN A0

const int AirValue = 620;   
const int WaterValue = 310;  
int soilMoistureValue = 0;
int soilmoisturepercent=0;

void initSoilMoisture(){
    pinMode(SOIL_PIN, INPUT);
}

float getSoilMoisture(){
    int soilMoistureValue = analogRead(SOIL_PIN);
    soilmoisturepercent = map(soilMoistureValue, AirValue, WaterValue, 0, 100);
    if(soilmoisturepercent >= 100){
       return 100;
    }
    else if (soilmoisturepercent <= 0){
        return 0;
    }
    else{
        return soilmoisturepercent;
    }
}
