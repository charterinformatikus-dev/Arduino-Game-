#include <Arduino.h>

#define X_PIN 1
#define Y_PIN 2
#define SW_PIN 4

void setup() {
  Serial.begin(115200);
  delay(1000);

  pinMode(SW_PIN, INPUT_PULLUP);  // Gomb felhúzóellenállással
  Serial.println("Joystick értékek olvasása elindult!");
}

void loop() {
  int xValue = analogRead(X_PIN);  // X tengely
  int yValue = analogRead(Y_PIN);  // Y tengely
  int swValue = digitalRead(SW_PIN); // Gomb (0 = lenyomva, 1 = felengedve)

  Serial.print("X: ");
  Serial.print(xValue);
  Serial.print(" | Y: ");
  Serial.print(yValue);
  Serial.print(" | SW: ");
  Serial.println(swValue == LOW ? "LENYOMVA" : "FELENGEDVE");

  delay(200);  // Kis szünet az olvashatóság kedvéért
}