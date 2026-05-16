#include <Arduino.h>
#include "semaforo.h"
// Pinos dos leds
const int LED_VERDE = 36;
const int LED_AMARELO = 37;
const int LED_VERMELHO = 38;
void iniciarLeds() {
  pinMode(LED_VERDE, OUTPUT);
  pinMode(LED_AMARELO, OUTPUT);
  pinMode(LED_VERMELHO, OUTPUT);
}
// Rotina para luz vermelha dos carros:
void ligarVermelho() {
  digitalWrite(LED_VERDE, LOW);
  digitalWrite(LED_AMARELO, LOW);
  digitalWrite(LED_VERMELHO, HIGH);
}
// Rotina para luz amarela dos carros:
void ligarAmarelo() {
  digitalWrite(LED_VERDE, LOW);
  digitalWrite(LED_AMARELO, HIGH);
  digitalWrite(LED_VERMELHO, LOW);
}
// Rotina para luz verde dos carros:
void ligarVerde() {
  digitalWrite(LED_VERDE, HIGH);
  digitalWrite(LED_AMARELO, LOW);
  digitalWrite(LED_VERMELHO, LOW);
}
