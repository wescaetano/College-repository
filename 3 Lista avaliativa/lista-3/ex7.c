#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float notas[5][4], somaNotas[5] = {0}, mediaNotas[5] = {0}, maiorMedia = 0.0;
    char nomes[5][100], nomeMaiorMedia[100] = "";

    // Preenchendo os nomes
    for (int i = 0; i < 5; i++) {
        printf("\nDigite o nome do %d� aluno(a): ", i + 1);
        fgets(nomes[i], sizeof(nomes[i]), stdin);
        nomes[i][strcspn(nomes[i], "\n")] = '\0'; // Remover a quebra de linha
    }

    // Preenchendo as notas
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            printf("\nDigite a %d� nota do aluno %s: ", j + 1, nomes[i]);
            scanf("%f", &notas[i][j]);
            somaNotas[i] += notas[i][j]; // Soma das notas durante a entrada
        }
    }

    // Calcular as m�dias e encontrar a maior m�dia
    for (int i = 0; i < 5; i++) {
        mediaNotas[i] = somaNotas[i] / 4; // Dividir pela quantidade de notas (4)

        if (mediaNotas[i] > maiorMedia) {
            maiorMedia = mediaNotas[i];
            strcpy(nomeMaiorMedia, nomes[i]);
        }
    }

    // Exibir as m�dias
    for (int i = 0; i < 5; i++) {
        printf("\nO aluno %s obteve a m�dia de: %.1f", nomes[i], mediaNotas[i]);
    }

    // Exibir o aluno com a maior m�dia
    printf("\nA maior m�dia foi de %.1f tirada pelo aluno %s.\n", maiorMedia, nomeMaiorMedia);

    return 0;
}
