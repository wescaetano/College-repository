#include <stdio.h>
#include <string.h>
#include <locale.h>

int main()
{
  setlocale(LC_ALL, "Portuguese");

  int matriz[4][6], cont10e30 = 0, contMaior10 = 0, somaQuarta = 0, somaTerceira = 0, contTerceira = 0;
  float mediaTerceira = 0.0;

  // Preenchendo a matriz
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 6; j++)
    {
      printf("\nDigite um n�mero [%d][%d]", i, j);
      scanf("%d", &matriz[i][j]);
    }
  }

  // For para realizar as opera��es
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 6; j++)
    {

      // N�meros entre 10 e 30
      if (matriz[i][j] > 10 && matriz[i][j] < 30)
      {
        cont10e30++;
      }

      // N�meros maiores que 10 e pares
      if (matriz[i][j] > 10 && matriz[i][j] % 2 == 0)
      {
        contMaior10++;
      }

      // Soma dos n�meros que est�o na quarta coluna
      if (j == 3)
      {
        somaQuarta += matriz[i][j];
      }

      // Media da terceira linha
      if (i == 2)
      {
        somaTerceira += matriz[i][j];
        contTerceira++;
      }
    }
  }

  if (contTerceira > 0)
  {
    mediaTerceira = (float)somaTerceira / contTerceira;
    printf("\nA media da terceira linha � de: %.1f", mediaTerceira);
  }
  printf("\nA quantidade de n�meros entre 10 e 30 � de: %d", cont10e30);
  printf("\nA quantidade de n�meros maiores que 10 e pares � de: %d", contMaior10);
  printf("\nA soma dos n�meros que est�o na quarta coluna � de: %d", somaQuarta);
}