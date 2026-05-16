#include <Arduino.h>
#include "botao_pedestre.h"
// Pino do botão:
const int BOTAO_PEDESTRE = 5;
// Flag para a interrupção externa:
volatile bool pressionado = false;
// Rotina de interrupção (ISR):
void IRAM_ATTR ISR_botao() {
  pressionado = true;
}
void iniciarBotao() {
  pinMode(BOTAO_PEDESTRE, INPUT);
}
// Função auxiliar para verificar o funcionamento do botão e debug:
bool verificarBotao(void) {
  return digitalRead(BOTAO_PEDESTRE);
}