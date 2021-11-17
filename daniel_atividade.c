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
void busca_vetor() {
  int indice = 0;
  int chave;
  int vetorInteiros[20];
  int vetorChaves[20];

  printf("\nDigite 20 numeros inteiros!\n");
  for (int i = 0; i < 20; i++) {
    scanf("%d", &vetorInteiros[i]);
  }
  printf("\nDigite uma chave para a busca...\n");
  scanf(" %d", &chave);

  printf("\nPosicoes         : |");
  for (int i = 0; i < 20; i++) {
    printf("%.2d|", i + 1);
  }
  printf("\nVetor de inteiros: |");
  for (int i = 0; i < 20; i++) {
    printf("%.2d|", vetorInteiros[i]);
  }

  for (int i = 0; i < 20; i++) {
    if (vetorInteiros[i] == chave) {
      vetorChaves[indice] = i + 1;
      indice++;
    }
  }
  if (indice) {
    printf("\n\nA chave <%d> esta na posicao: |", chave);
    for (int i = 0; i < indice; i++) {
      printf("%d|", vetorChaves[i]);
    }
  } else {
    printf("\n\nChave <%d> nao encontrada!!", chave);
  }
}

void calculo_determinante() {
  int matriz[2][2];
  int diagonalPrincipal;
  int diagonalSecundaria;
  int determinante;

  printf("\nDigite 4 numeros inteiros para matriz 2x2!\n");
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      scanf(" %d", &matriz[i][j]);
    }
  }

  printf("\nMatrtiz \n");
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      printf("|%.2d|", matriz[i][j]);
    }
    printf("\n");
  }

  diagonalPrincipal = matriz[0][0] * matriz[1][1];
  diagonalSecundaria = matriz[0][1] * matriz[1][0];
  determinante = diagonalPrincipal - diagonalSecundaria;
  printf("Determinante: %d", determinante);
}
int main() {
  do {
    calculo_determinante();
  } while (_INDICE);
}