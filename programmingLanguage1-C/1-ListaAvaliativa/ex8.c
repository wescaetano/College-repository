#include <stdio.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");
  
  int numero;

printf("\n Digite um n�mero para saber a tabuada desse n�mero.");
printf("\n");

  for(int i=1; i <= 10; i++){
    printf("\n\nDigite um n�mero:\n");
    scanf("%d", &numero);

    if(numero < 1){
      printf("\n Digite apenas n�meros positivos.\n");
    }


    for(int j = 1; j <= 10; j++){
      printf("\nVezes %d: %d", j, numero * j);
    }
    }
  }
