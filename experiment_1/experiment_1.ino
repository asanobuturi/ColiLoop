/*
Experiment 1:Voltage Meter
最大500Vまで電圧を測る
*/

#define MAX_VOLTAGE 500.0

#define VOLTAGE_PIN A0

float voltage(uint8_t pin){
    return analogRead(pin) * MAX_VOLTAGE / 1023.0;
}

void setup(){
    Serial.begin(115200);
}

void loop(){
    Serial.println(voltage(VOLTAGE_PIN));
}