#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int numero;
    unsigned long long fatorial = 1;

    printf("Digite um n�mero para saber seu valor fatorial.\n");
    printf("\n");
    for(int i=0; i < 10; i++) {
    
    printf("\nDigite um n�mero inteiro: \n");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Fatorial n�o existe para n�meros negativos.");
    } else {
        for (int j=1; j <= numero; j++) {
            fatorial *= j;
        }
        printf("O fatorial de %d �: %llu\n", numero, fatorial);
    }
    fatorial = 1;
    }

    return 0;
}