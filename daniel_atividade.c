// Autor: Daniel Caetano de Souza Ferreira

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int _INDICE = 10;
void abertura() {
  system("cls|| clear");
  printf("|*****************************************|\n");
  printf("|***************BEM VINDO!!***************|\n");
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
void vetor_ao_cubo() {

  int vetorInteiros[10];
  int vetorAoCubo[10];
  int indice;
  system("cls|| clear");
  printf("|[1] - Questao 1: Vetor ao cubo!          |\n");
  printf("\nDigite 10 numeros inteiros!\n");
  for (int i = 0; i < 10; i++) {
    scanf("%d", &vetorInteiros[i]);
    vetorAoCubo[i] = pow(vetorInteiros[i], 3);
  }
  printf("Vetor de inteiros | Vetor ao cubo\n");
  for (int i = 0; i < 10; i++) {
    printf("     %.2d           |         %d       \n", vetorInteiros[i],
           vetorAoCubo[i]);
  }

  printf("[1] Para fazer a operacao novamente!\n");
  printf("[2] Para voltar ao menu principal!\n");
  printf("[3] Para sair do programa!\n");
  scanf(" %d", &_INDICE);

  switch (_INDICE) {
  case 1:
    vetor_ao_cubo();
  case 2:
    _INDICE = 10;
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
void calcula_Y() {
  int vetorX[10];
  int vetorY[10];
  int vetorYquadrado[10];
  int vetorYcubico[10];
  system("cls||clear");
  printf("|[2] - Questao 2: Calcula funcao Y!       |\n");
  // int indice;

  printf("\nDigite 10 numeros inteiros!\n");
  for (int i = 0; i < 10; i++) {
    scanf("%d", &vetorX[i]);
    vetorY[i] = (2 * vetorX[i]) + 1;
    vetorYquadrado[i] = pow(vetorX[i], 2);
    vetorYcubico[i] = pow(vetorX[i], 3);
  }
  system("cls || clear");
  printf("__________________________________________________________\n");
  printf("||Vetor X | Vetor Y(2X+1) | Vetor Y^2  |    Vetor Y^3   ||\n");
  printf("----------------------------------------------------------\n");
  for (int i = 0; i < 10; i++) {
    printf("||   %.2d   |      %.2d       |     %.3d    |      %.4d      |"
           "|\n",
           vetorX[i], vetorY[i], vetorYquadrado[i], vetorYcubico[i]);
    printf("----------------------------------------------------------\n");
  }
  printf("[1] Para fazer a operacao novamente!\n");
  printf("[2] Para voltar ao menu principal!\n");
  printf("[3] Para sair do programa!\n");
  scanf(" %d", &_INDICE);

  switch (_INDICE) {
  case 1:
    calcula_Y();
  case 2:
    _INDICE = 10;
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
  system("cls||clear");
  printf("|[3] - questao 3: Soma vetor!             |\n");
  printf("\nDigite 10 numeros inteiros!\n");
  for (int i = 0; i < 10; i++) {
    scanf("%d", &vetorInteiros[i]);
    soma = soma + vetorInteiros[i];
  }
  printf("Vetor de inteiros: |");
  for (int i = 0; i < 10; i++) {
    printf("%d|", vetorInteiros[i]);
  }
  printf("\nSoma: |%d|\n", soma);
  printf("[1] Para fazer a operacao novamente!\n");
  printf("[2] Para voltar ao menu principal!\n");
  printf("[3] Para sair do programa!\n");
  scanf(" %d", &_INDICE);
  switch (_INDICE) {
  case 1:
    soma_vetor();
  case 2:
    _INDICE = 10;
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
    printf("\n\nChave <%d> nao encontrada!!\n", chave);
  }
  printf("[1] Para fazer a operacao novamente!\n");
  printf("[2] Para voltar ao menu principal!\n");
  printf("[3] Para sair do programa!\n");
  scanf(" %d", &_INDICE);

  switch (_INDICE) {
  case 1:
    busca_vetor();
  case 2:
    _INDICE = 10;
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

  printf("\n[1] Para fazer a operacao novamente!\n");
  printf("[2] Para voltar ao menu principal!\n");
  printf("[3] Para sair do programa!\n");
  scanf(" %d", &_INDICE);

  switch (_INDICE) {
  case 1:
    calculo_determinante();
  case 2:
    _INDICE = 10;
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
    }
  } while (_INDICE);
  system("pause");
}