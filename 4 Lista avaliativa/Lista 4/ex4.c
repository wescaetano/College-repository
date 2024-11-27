#include <stdio.h>
#include <locale.h>

float media(float nota[], char tipo);

int main() {
    setlocale(LC_ALL, "Portuguese");

    float nota[3];
    char tipo;

    // Coletando as notas do aluno
    for (int i = 0; i < 3; i++) {
        printf("\nDigite sua %d� nota: ", i + 1);
        scanf("%f", &nota[i]);
    }

    // Limpar o buffer de entrada antes de ler o caractere
    getchar();
    
    printf("\nDigite uma letra (A - M�dia Aritm�tica, P - M�dia Ponderada): ");
    scanf("%c", &tipo);

    // Calculando a m�dia
    float resultado = media(nota, tipo);
    if (resultado != -1) {
        printf("\nA m�dia do aluno foi de: %.2f\n", resultado);
    } else {
        printf("\nOp��o inv�lida!\n");
    }

    return 0;
}

float media(float nota[], char tipo) {
    float soma = 0.0;
    float media = 0.0;
    float p1 = 0.0, p2 = 0.0, p3 = 0.0, mediaPonderada = 0.0;

    if (tipo == 'A') {
        for (int i = 0; i < 3; i++) {
            soma += nota[i];
        }
        media = soma / 3;
        return media;
    }

    if (tipo == 'P') {
        p1 = nota[0] * 0.5;
        p2 = nota[1] * 0.3;
        p3 = nota[2] * 0.2;
        mediaPonderada = p1 + p2 + p3;
        return mediaPonderada;
    }

    // Retorno padr�o em caso de op��o inv�lida
    return -1;
}
