#include <Arduino.h>

// Pin definitions
const int ANL_PIN = D0;  // GPIO switch pin

// Variable to track LED state
bool ledState = false;

void setup() {
  // Initialize Serial for logging
  Serial.begin(115200);
  delay(1000);  // Wait for serial to initialize
  
  Serial.println("\n\n=== Voltage Measurement Control Initialized ===");
  Serial.println("XIAO ESP32C3 - Voltage measurement");
  Serial.println("=====================================\n");
}

void loop() {
  // Update button state
  const float value = analogRead(A0);
  Serial.println("Analog Read Value: " + String(value));
  float voltage = (value / 4095.0) * 3.3;

  
  Serial.println("Analog Read voltage: " + String(voltage));
  // Small delay to prevent overwhelming the serial output
  delay(100);
}