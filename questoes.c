#include "questoes.h"
#include "daniel_atividade.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void vetor_ao_cubo() {

  int vetorInteiros[10];
  int vetorAoCubo[10];
  system("cls|| clear");
  printf("|[1] - Questao 1: Vetor ao cubo!          |\n");
  printf("\nDigite 10 numeros inteiros!\n");
  for (int i = 0; i < 10; i++) {
    scanf("%d", &vetorInteiros[i]);
    vetorAoCubo[i] = pow(vetorInteiros[i], 3);
  }
  system("cls||clear");
  printf("___________________________________________\n");
  printf("Vetor de inteiros | Vetor ao cubo\n");
  for (int i = 0; i < 10; i++) {
    printf("     %.2d           |         %d       \n", vetorInteiros[i],
           vetorAoCubo[i]);
  }
  printf("------------------------------------------\n");
  submenu(&vetor_ao_cubo);
}
void calcula_Y() {

  float vetorX[10];
  float vetorY[10];
  float vetorYquadrado[10];
  float vetorYcubico[10];

  system("cls||clear");
  printf("|[2] - Questao 2: Calcula funcao Y!       |\n");

  printf("\nDigite 10 numeros !\n");
  for (int i = 0; i < 10; i++) {
    scanf("%f", &vetorX[i]);
    vetorY[i] = (2.0 * vetorX[i]) + 1.0;
    vetorYquadrado[i] = pow(vetorX[i], 2);
    vetorYcubico[i] = pow(vetorX[i], 3);
  }
  system("cls || clear");
  printf(
      "_______________________________________________________________________"
      "__________________________________"
      "\n");

  for (int i = 0; i < 10; i++) {
    printf("||Vetor X: %.2f   |Vetor Y(2X+1): %.2f   | Vetor Y^2: %.2f   |  "
           "    "
           "Vetor Y^3: %.2f   "
           "\n",
           vetorX[i], vetorY[i], vetorYquadrado[i], vetorYcubico[i]);
    printf(
        "---------------------------------------------------------------------"
        "-----------------------------------"
        "-\n");
  }

  submenu(&calcula_Y);
}
void soma_vetor() {
  int vetorInteiros[10];
  int soma = 0;
  int indice;
  system("cls||clear");
  printf("|[3] - questao 3: Soma vetor!             |\n");
  printf("\nDigite 10 numeros inteiros!\n");
  for (int i = 0; i < 10; i++) {
    scanf("%d", &vetorInteiros[i]);
    soma = soma + vetorInteiros[i];
  }
  system("cls || clear");
  printf("Vetor de inteiros: |");
  for (int i = 0; i < 10; i++) {
    printf("%d|", vetorInteiros[i]);
  }
  printf("\nSoma: |%d|\n", soma);

  submenu(&soma_vetor);
}
void busca_vetor() {
  int indice = 0;
  int chave;
  int vetorInteiros[20];
  int vetorChaves[20];
  system("cls||clear");
  printf("|[4] - Questao 4: Busca no vetor!         |\n");
  printf("\nDigite 20 numeros inteiros!\n");
  for (int i = 0; i < 20; i++) {
    scanf("%d", &vetorInteiros[i]);
  }
  printf("\nDigite uma chave para a busca...\n");
  scanf(" %d", &chave);
  system("cls || clear");

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
    printf("\n");
  } else {
    printf("\n\nChave <%d> nao encontrada!!\n", chave);
  }
  submenu(&busca_vetor);
}
void calculo_determinante() {
  int matriz[2][2];
  int diagonalPrincipal;
  int diagonalSecundaria;
  int determinante;
  system("cls||clear");
  printf("|[5] - Questao 5: Calcula determinante    |\n");
  printf("\nDigite 4 numeros inteiros para matriz 2x2!\n");
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      scanf(" %d", &matriz[i][j]);
    }
  }
  system("cls || clear");
  printf("\nMatriz \n");
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      printf("|%.2d|", matriz[i][j]);
    }
    printf("\n");
  }

  diagonalPrincipal = matriz[0][0] * matriz[1][1];
  diagonalSecundaria = matriz[0][1] * matriz[1][0];
  determinante = diagonalPrincipal - diagonalSecundaria;
  printf("Determinante: |%d|\n", determinante);

  submenu(&calculo_determinante);
}
