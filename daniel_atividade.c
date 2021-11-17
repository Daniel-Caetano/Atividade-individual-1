// Autor: Daniel Caetano de Souza Ferreira

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int _INDICE = 1;

void menu() {
  int indice;

  printf("Qual operação deseja realizar? Digite o número de sua escolha: \n");
  printf("[1] - Questão 1! \n");
  printf("[2] - Questão 2!\n");
  printf("[3] - questão 3! \n");
  printf("[4] - Questão 4! \n");
  printf("[5] - Questão 5! \n");
  printf("[0] - Questão 5! \n");

  scanf("%d", &indice);
}

void vetor_ao_cubo() {
  int vetorInteiros[10];
  int vetorAoCubo[10];
  int indice;

  printf("\nDigite 10 numeros inteiros!\n");
  for (int i = 0; i < 10; i++) {
    scanf("%d", &vetorInteiros[i]);
    vetorAoCubo[i] = pow(vetorInteiros[i], 3);
  }
  printf("Vetor de inteiros | Vetor ao cubo\n");
  for (int i = 0; i < 10; i++) {
    printf("     %d          |         %d       \n", vetorInteiros[i],
           vetorAoCubo[i]);
  }

  printf("[1] Para fazer a operação novamente!\n");
  printf("[2] Para voltar ao menu principal!\n");
  printf("[3] Para sair do programa!");
  scanf(" %d", &indice);

  switch (indice) {
  case 1:
    vetor_ao_cubo();
  case 2:
    break;
  case 3:
    system("cls || clear");
    printf("\nObrigado por utilizar nosso sistema!");
    _INDICE = 0;
    break;
  default:
    printf("\nDigite uma operação válida! Opções: [1], [2] ou [3]\n");
  }
}

void soma_vetor() {
  int vetorInteiros[10];
  int soma = 0;
  int indice;

  printf("\nDigite 10 numeros inteiros!\n");
  for (int i = 0; i < 10; i++) {
    scanf("%d", &vetorInteiros[i]);
    soma = soma + vetorInteiros[i];
  }
  printf("Vetor de inteiros: |");
  for (int i = 0; i < 10; i++) {
    printf("%d|", vetorInteiros[i]);
  }
  printf("\nSoma: |%d|", soma);
}

int main() {
  do {
    soma_vetor();
  } while (_INDICE);
}