/**
 * @file LED_ON_OFF.cpp
 * @brief Código para el control de un LED (encendido/apagado) en un ESP32.
 * 
 * Este programa configura el pin GPIO 22 como salida digital para controlar
 * el estado de un LED externo, realizando un ciclo infinito de parpadeo.
 */

#include <Arduino.h> // Inclusión de la librería base para el framework Arduino en ESP32

// Definición del pin GPIO a utilizar. Se utiliza el pin 22 según los requerimientos.
#define LED_PIN 22 

/**
 * @brief Configuración inicial del microcontrolador.
 * 
 * Esta función se ejecuta una sola vez al iniciar el dispositivo o tras un reset.
 * Se encarga de inicializar los periféricos y configurar el modo de los pines.
 */
void setup() {
  // Configuración del pin definido como SALIDA (OUTPUT).
  // Esto permite al microcontrolador enviar niveles de voltaje (0V o 3.3V) a través del pin.
  pinMode(LED_PIN, OUTPUT);
}

/**
 * @brief Bucle principal de ejecución.
 * 
 * Función que se ejecuta de forma cíclica e infinita mientras el dispositivo esté encendido.
 * Contiene la lógica principal del programa.
 */
void loop() {
  // Envía un nivel LÓGICO ALTO (HIGH) al pin GPIO 22.
  // En el ESP32, esto aplica un voltaje de 3.3V, encendiendo el LED.
  digitalWrite(LED_PIN, HIGH);
  
  // Pausa la ejecución del programa durante 1000 milisegundos (1 segundo).
  // El estado del pin se mantiene sin cambios durante este intervalo.
  delay(1000);
  
  // Envía un nivel LÓGICO BAJO (LOW) al pin GPIO 22.
  // Esto coloca el pin a 0V (GND), apagando el LED.
  digitalWrite(LED_PIN, LOW);
  
  // Pausa la ejecución durante otros 1000 milisegundos para completar el ciclo de parpadeo.
  delay(1000);
}
