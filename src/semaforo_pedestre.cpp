#include <Arduino.h>
#include "semaforo_pedestre.h"
// Pinos dos leds do semáforo de pedestres:
const int LED_VERDE_PEDESTRE = 35;
const int LED_VERMELHO_PEDESTRE = 39;
void iniciarSemaforoPedestre() {
  pinMode(LED_VERDE_PEDESTRE, OUTPUT);
  pinMode(LED_VERMELHO_PEDESTRE, OUTPUT);
}
void ligarVerdePedestre() {
  digitalWrite(LED_VERDE_PEDESTRE, HIGH);
  digitalWrite(LED_VERMELHO_PEDESTRE, LOW);
}
void ligarVermelhoPedestre() {
  digitalWrite(LED_VERDE_PEDESTRE, LOW);
  digitalWrite(LED_VERMELHO_PEDESTRE, HIGH);
}