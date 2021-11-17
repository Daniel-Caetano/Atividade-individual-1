// Autor: Daniel Caetano de Souza Ferreira
// Data: 17/11/2021
// Primeira Atividade individual

#include "daniel_atividade.h"
#include "menu.h"
#include "questoes.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
int extern _INDICE=10;

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