#include <Arduino.h>
#include <comms.h>

void initComms(){
    Serial.begin(9600);
}

void sendData(float moisture, float temp){
    Serial.println("---------------------------------");
    Serial.print("Mositure: "); Serial.print(moisture); Serial.println("%");
    Serial.print("Temperature: "); Serial.print(temp); Serial.println("°C");
}