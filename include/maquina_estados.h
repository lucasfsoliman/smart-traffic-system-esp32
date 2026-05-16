#ifndef MAQUINA_ESTADOS_H
#define MAQUINA_ESTADOS_H
// Declaração dos estados do semáforo:
typedef enum {
  VERDE_CARRO,
  AMARELO_CARRO,
  VERMELHO_CARRO
} Estado;
extern Estado estadoAtual;
extern unsigned long tempoEstado; 
void atualizarSemaforo();
#endif