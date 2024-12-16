#include <stdio.h>
#include <locale.h>

int main () {
  setlocale(LC_ALL, "Portuguese");

  int matriz[3][5], menorNumero, somaMult3=0, maiorNumColuna2, somaNum=0, contNum=0;
  float mediaNum=0.0;

  // Preenchendo a matriz
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 5; j++){
      printf("\nDigite um n�mero [%d][%d]: ", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }

  // Inicializando menorNumero e maiorNumColuna2 com o primeiro valor relevante
  menorNumero = matriz[0][0];          
  maiorNumColuna2 = matriz[0][2];     

  // Fazendo as opera��es
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 5; j++){

      somaNum += matriz[i][j];
      contNum++;

      // Menor n�mero da matriz
      if(matriz[i][j] < menorNumero) {
        menorNumero = matriz[i][j];
      }

      // Soma dos m�ltiplos de tr�s
      if(matriz[i][j] % 3 == 0) {
        somaMult3 += matriz[i][j];
      }

      // Maior n�mero da terceira coluna (coluna de �ndice 2)
      if(j == 2 && matriz[i][j] > maiorNumColuna2) {
        maiorNumColuna2 = matriz[i][j];
      }
    }
  }


  if(contNum > 0) {
    mediaNum = (float)somaNum / contNum;
    printf("\nA media dos n�meros da matriz � de: %.1f", mediaNum);
  }
  
  // Exibindo os resultados
  printf("\nMenor n�mero da matriz: %d", menorNumero);
  printf("\nSoma dos m�ltiplos de 3: %d", somaMult3);
  printf("\nMaior n�mero da terceira coluna: %d", maiorNumColuna2);

  return 0;
}
