// Inclure la bibliothèque pour la communication avec le capteur
#include <Arduino.h>

// Broche analogique à laquelle est connecté le capteur de température
const int capteurTemperaturePin = A0;

void setup() {
  // Démarre la communication série
  Serial.begin(9600);
}

void loop() {
  // Lit la valeur analogique du capteur de température
  int valeurLue = analogRead(capteurTemperaturePin);

  // Convertit la valeur en température (en degrés Celsius)
  float temperatureCelsius = (valeurLue / 1023.0) * 500.0;

  // Affiche la température sur le moniteur série
  Serial.print("Température : ");
  Serial.print(temperatureCelsius);
  Serial.println(" °C");

  // Attendez quelques secondes avant de mesurer à nouveau
  delay(5000);
}
