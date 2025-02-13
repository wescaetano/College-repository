#include <stdio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  int numero, contMaior10=0, somaMult5=0, somaMaiores10=0, numPrimos=0;
  float mediaImpares=0.0;

  for(int i = 0; i < 10; i++) {
    printf("Digite um n�mero: \n");
    scanf("%d", &numero);

    //media dos impares maiores que 10
    if(numero % 2 != 0 && numero > 10) {
      contMaior10++;
      somaMaiores10+= numero;
    }

    //soma dos multiplos de 5
    if(numero % 5 == 0) {
      somaMult5+= numero;
    }

    //quantidade de n�meros primos
    int divisores=0;
    for(int j = 1; j <= numero; j++) {
      if(numero % j == 0) {
        divisores++;
      }
    }
    if(divisores == 2) {
      numPrimos++;
    }
  }

  if(contMaior10 > 0) {
    mediaImpares = (float)somaMaiores10 / contMaior10;
    printf("\nA media dos n�meros �mpares maiores que dez � de: %.1f", mediaImpares);
  }
  printf("\nA soma dos n�meros multiplos de cinco � de: %d", somaMult5);
  printf("\nA quantidade de n�meros primos � de: %d", numPrimos);

return 0;
}