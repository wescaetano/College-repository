#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  int matriz[2][6] = {0}, matriz2[2][6] = {0}, maiorNum=0, somaMult3=0, somaLinha2=0, somaMatriz=0, cont=0;
  float media=0.0, mediaLinha2=0.0;

  //Preenchendo a matriz
  for(int i=0; i<2; i++){
    for(int j=0; j<6; j++){
      printf("\nDigite um n�mero [%d][%d]:", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }

  //For para fazer as opera��es
  for(int i=0; i<2; i++){
    for(int j=0; j<6; j++){

      //Achando o maior numero
      if(i == 0){
        maiorNum = matriz[i][0];
      }
      if(matriz[i][j] > maiorNum){
        maiorNum = matriz[i][j];
      }

      //Soma dos multiplos de 3
      if(matriz[i][j] % 3 == 0){
        somaMult3 += matriz[i][j];
      }

      //Media dos n�meros da segunda linha da matriz
      if(i == 1){
        somaLinha2 += matriz[i][j];
      }

      //Media dos n�meros da matriz
      somaMatriz += matriz[i][j];
      cont++;

    }
  }

  mediaLinha2 = (float)somaLinha2 / 6;

  if(cont > 0){
    media = (float)somaMatriz / cont;
  }

  for(int i=0; i<2; i++){
    for(int j=0; j<6; j++){
      matriz2[i][j] = matriz[i][j] * media;
    }
  }

  printf("\nO maior n�mero da matriz �: %d ", maiorNum);
  printf("\nA soma dos n�meros multiplos de 3 � de: %d", somaMult3);
  printf("\nA media da segunda linha da matriz � de: %.1f", mediaLinha2);
  printf("\nA media dos n�meros da matriz � de: %.1f", media);
  printf("\n");
  
  printf("\nOs n�meros da matriz vezes a media d�o o resultado de: \n");
  for(int i=0; i<2; i++){
    for(int j=0; j<6; j++){
      printf("\t%d", matriz2[i][j]);
    }
    printf("\n");
  }

}