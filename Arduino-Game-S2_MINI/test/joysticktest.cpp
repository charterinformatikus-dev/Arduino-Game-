#include <Arduino.h>

// ADC pins for joystick
const int xPin = 1;  // ADC1 channel for X axis
const int yPin = 2;  // ADC1 channel for Y axis

void setup() {
    // Initialize serial communication
    Serial0.begin(115200);
    
    // Configure ADC pins
    analogReadResolution(12);  // Set ADC resolution to 12 bits
    pinMode(xPin, INPUT);
    pinMode(yPin, INPUT);
    
    delay(1000);  // Short delay for stability
    Serial0.println("Joystick Test Started");
}

void loop() {
    // Read analog values
    int xValue = analogRead(xPin);
    int yValue = analogRead(yPin);
    
    // Print values to serial
    Serial0.print("X: ");
    Serial0.print(xValue);
    Serial0.print(", Y: ");
    Serial0.println(yValue);
    
    delay(100);  // Small delay between readings
}