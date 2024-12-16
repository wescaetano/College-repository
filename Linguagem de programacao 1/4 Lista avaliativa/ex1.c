#include <stdio.h>
#include <locale.h>

int num_perfeito(int num);

int main() {
    setlocale(LC_ALL, "Portuguese");

    int num = 0;

    printf("\nDigite um n�mero inteiro: ");
    scanf("%d", &num);

    if (num_perfeito(num)) {
        printf("\nO n�mero %d � perfeito\n", num);
    } else {
        printf("\nO n�mero %d n�o � perfeito\n", num);
    }

    return 0;
}

int num_perfeito(int num) {
    int somaDivisores = 0;

    // Opera��o para saber se o n�mero � perfeito
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            somaDivisores += i;
        }
    }

    // Verifica��o se � um n�mero perfeito
    return num == somaDivisores;
}
