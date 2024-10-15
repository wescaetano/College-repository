#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "Portuguese");

  int vetA[5], vetB[5], soma=0;

  for(int i=0; i < 5; i++){
    printf("\nDigite um n�mero: (ser�o cinco n�meros no vetor A)");
    scanf("%d", &vetA[i]);
  }

  for(int i=0; i < 5; i++){
    printf("\nDigite um n�mero: (ser�o cinco n�meros no vetor B)");
    scanf("%d", &vetB[i]);
  }

    int vetC[10];

    for (int i = 0; i < 5; i++){
      vetC[i] = vetA[i];
    }

    for (int i = 0; i < 5; i++) {
      vetC[5 + i] = vetB[i];
    }

    printf("Array C: ");
    for (int i = 0; i < 10; i++) {
      printf("\n %d", vetC[i]);
    }

    for (int i = 0; i < 10; i++) {
        soma = 0;
        
        // Encontrando divisores pr�prios de vetC[i]
        for (int j = 1; j < vetC[i]; j++) {
            if (vetC[i] % j == 0) {
                soma += j;
            }
        }

        // Se a soma dos divisores for igual ao n�mero, � perfeito
        if (soma == vetC[i]) {
            printf("\nO n�mero %d � perfeito e se encontra no �ndice %d", vetC[i], i);
        }
    }

    return 0;
}