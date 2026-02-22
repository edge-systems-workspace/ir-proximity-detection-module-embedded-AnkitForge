#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded Obstacle Detection System using IR Sensor
 * @author Ankit Patel
 * @date 23 feb 2026
 *
 * @details
 * Reads digital input from IR sensor
 * and detects obstacle presence.
 */

int irPin=2;
int irState=0;

void setup() {
    pinMode(irPin,INPUT);
    Serial.begin(9600);
}

void loop() {
    irState=digitalRead(irPin);


}