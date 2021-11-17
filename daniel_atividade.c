// Autor: Daniel Caetano de Souza Ferreira
// Data: 17/11/2021
// Primeira Atividade individual

#include "daniel_atividade.h"
#include "questoes.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int _INDICE = 10;
void abertura() {
  system("cls|| clear");
  printf("|*****************************************|\n");
  printf("|***************BEM VINDO!!***************|\n");
  printf("|********Primeira atividade individual****|\n");
  printf("|****Protocolo Bicicleta com rodinhas*****|\n");
  printf("|*****************************************|\n");
}
void menu() {
  system("cls || clear");
  printf("|_________________________________________|\n");
  printf("|Qual operacao deseja realizar?           |\n");
  printf("|Digite o numero de sua escolha :         |\n");
  printf("|-----------------------------------------|\n");
  printf("|[1] - Questao 1: Vetor ao cubo!          |\n");
  printf("|[2] - Questao 2: Calcula funcao Y!       |\n");
  printf("|[3] - questao 3: Soma vetor!             |\n");
  printf("|[4] - Questao 4: Busca no vetor!         |\n");
  printf("|[5] - Questao 5: Calcula determinante    |\n");
  printf("|[6] - Sair:                              |\n");
  printf("|-----------------------------------------|\n");

  scanf("%d", &_INDICE);
}
void submenu(void (*func)(void)) {
  printf("\n___________________________________________\n");
  printf("|Qual operacao deseja realizar?           |\n");
  printf("|Digite o numero de sua escolha :         |\n");
  printf("|-----------------------------------------|\n");
  printf("|[1] Para fazer a operacao novamente!     |\n");
  printf("|[2] Para voltar ao menu principal!       |\n");
  printf("|[3] Para sair do programa!               |\n");
  printf("|-----------------------------------------|\n");
  scanf(" %d", &_INDICE);

  switch (_INDICE) {
  case 1:
    func();
  case 2:
    _INDICE = 10;
    break;
  case 3:
    system("cls || clear");
    printf("\nObrigado por utilizar nosso sistema!");
    _INDICE = 0;
    break;
  default:
    printf("\nOpcao invalida, voltando ao menu iniciar!\n");
    Sleep(2000);
    _INDICE = 10;
    break;
  }
}

int main() {

  abertura();
  do {

    menu();

    switch (_INDICE) {
    case 1:
      vetor_ao_cubo();
      break;
    case 2:
      calcula_Y();
      break;
    case 3:
      soma_vetor();
      break;
    case 4:
      busca_vetor();
      break;
    case 5:
      calculo_determinante();
      break;

    case 6:
      printf("\nObrigado por utilizar nosso sistema!\n");
      _INDICE = 0;
      break;

    default:
      printf("Comando invalido!");
      Sleep(2000);
    }
  } while (_INDICE);
  system("pause");
}