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
