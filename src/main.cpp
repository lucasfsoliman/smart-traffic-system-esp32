#include <Arduino.h>
#include "botao_pedestre.h"
#include "semaforo.h"
#include "semaforo_pedestre.h"
#include "maquina_estados.h"
void setup() {
  Serial.begin(115200);
  iniciarBotao();
  iniciarLeds();
  iniciarSemaforoPedestre();
  tempoEstado = millis();
  // Interrupção externa para o pedido de travessia do pedestre:
  attachInterrupt(
  digitalPinToInterrupt(BOTAO_PEDESTRE),
  ISR_botao,
  RISING
  );
}
void loop() {
  // Transição para a sequência de travessia do pedestre quando o botão é pressionado:
  if (pressionado){
    pressionado = false;
    estadoAtual = AMARELO_CARRO;
    tempoEstado = millis();
  }
  // Mantém a lógica dos semáforos:
  atualizarSemaforo();
}