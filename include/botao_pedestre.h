#ifndef BOTAO_PEDESTRE_H
#define BOTAO_PEDESTRE_H
#include <Arduino.h>
extern volatile bool pressionado;
extern const int BOTAO_PEDESTRE;
void iniciarBotao();
bool verificarBotao();
void IRAM_ATTR ISR_botao();
#endif