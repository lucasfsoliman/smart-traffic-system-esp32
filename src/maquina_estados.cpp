#include <Arduino.h>
#include "maquina_estados.h"
#include "semaforo.h"
#include "semaforo_pedestre.h"
// Tempo de permanência de cada estado do semáforo em ms:
const unsigned long TEMPO_VERDE = 5000;
const unsigned long TEMPO_VERMELHO = 5000;
const unsigned long TEMPO_AMARELO = 2000;
Estado estadoAtual = VERDE_CARRO;
unsigned long tempoEstado = 0;
// Função responsável pela lógica de transição dos estados do semáforo:
void atualizarSemaforo(){
  switch (estadoAtual){
    case VERDE_CARRO:
      ligarVerde();
      ligarVermelhoPedestre();
      if (millis() - tempoEstado >= TEMPO_VERDE){
        estadoAtual = AMARELO_CARRO;
        tempoEstado = millis();
    }
    break;

    case AMARELO_CARRO:
      ligarAmarelo();
      if (millis() - tempoEstado >= TEMPO_AMARELO){
        estadoAtual = VERMELHO_CARRO;
        tempoEstado = millis();
    }
    break;

    case VERMELHO_CARRO:
      ligarVermelho();
      ligarVerdePedestre();
      if (millis() - tempoEstado >= TEMPO_VERMELHO){
        estadoAtual = VERDE_CARRO;
        tempoEstado = millis();
    }
    break;
  }
}
