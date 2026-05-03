/**
 * Actualizado el: 03/05/2026 15:52:20
 */
#include <Arduino.h>

#include <WiFi.h>

// Configura aquí tus credenciales
const char *ssid = "Nettplus_Astudillo Romero";
const char *password = "19_03_1953";

void setup() {
  Serial.begin(115200);
  delay(1000);

  Serial.println();
  Serial.print("Conectando a ");
  Serial.println(ssid);

  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("");
  Serial.println("¡WiFi conectado!");
  Serial.print("Dirección IP: ");
  Serial.println(WiFi.localIP());

  pinMode(2, OUTPUT); // LED integrado
}

void loop() {
  // Parpadeo rápido para indicar que está conectado
  digitalWrite(2, HIGH);
  delay(100);
  digitalWrite(2, LOW);
  delay(100);
}
