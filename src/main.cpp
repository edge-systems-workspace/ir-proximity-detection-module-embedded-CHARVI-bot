#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded Obstacle Detection System using IR Sensor
 * @author CHARVI
 * @date 2026-01-21
 *
 * @details
 * Reads digital input from IR sensor
 * and detects obstacle presence.
 */
int IR_pin = 8;
int LED_pin = 13;
/**
 * @brief Initialize serial communication and configure IR sensor pin.
 * @details
 * Starts the Serial port at 9600 baud for logging and configures `IR_PIN` as an input.
 * This function runs once after the microcontroller resets or powers up.
 * @author shre-coder638
 * @date 2026-02-17
 */
void setup(){
    pinMode(IR_pin, INPUT);
    pinMode(LED_pin, OUTPUT);
    Serial.begin(9600);
}
/**
 * @brief Read the IR sensor and print obstacle status.
 * @details
 * Continuously reads the digital state of `IR_PIN`. If the sensor reads LOW,
 * an obstacle is reported; otherwise, no obstacle is reported. A delay is
 * applied between readings to reduce serial output frequency.
 * @author shre-coder638
 * @date 2026-02-17
 */
void loop(){
    int value = digitalRead(IR_pin);
    if(value == 0){                //Active Low Sensor
        Serial.println("Object Detected");
        digitalWrite(13,1);
    }else{
        Serial.println("No Object Detected");
        digitalWrite(13,1);
    }
    delay(300);

}

