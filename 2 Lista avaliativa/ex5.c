#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char nomes[5][100], vendedorMaiorComissao[100];
    int maiorQueAMedia = 0;
    float valores[5], valorTotalBruto = 0.0, mediaValores = 0.0, maiorComissao = 0.0;

    // Entrada dos dados de cada vendedor
    for (int i = 0; i < 5; i++) {
        printf("\nDigite o nome do vendedor %d: ", i + 1);
        fgets(nomes[i], sizeof(nomes[i]), stdin);
        nomes[i][strcspn(nomes[i], "\n")] = '\0';  

        printf("Digite o valor total das vendas do vendedor %s: ", nomes[i]);
        scanf("%f", &valores[i]);
        getchar();  // Limpar o buffer de entrada
    }

    // C�lculo do valor total bruto de vendas
    for (int i = 0; i < 5; i++) {
        valorTotalBruto += valores[i];
    }

    // C�lculo da m�dia
    mediaValores = valorTotalBruto / 5;

    // Exibe valores e calcula maior comiss�o e vendedores acima da m�dia
    for (int i = 0; i < 5; i++) {
        float comissaoAtual = valores[i] * 0.10;
        float valorTotalPorVendedor = valores[i] + comissaoAtual;
        
        printf("\nValor total das vendas mais o acr�scimo de 10%% referente ao vendedor %s �: %.2f", nomes[i], valorTotalPorVendedor);

        // Verifica se o vendedor vendeu acima da m�dia
        if (valores[i] > mediaValores) {
            maiorQueAMedia++;
        }

        // Atualiza o vendedor com a maior comiss�o
        if (comissaoAtual > maiorComissao) {
            maiorComissao = comissaoAtual;
            strcpy(vendedorMaiorComissao, nomes[i]);
        }
    }

    // Exibe os resultados finais
    printf("\n\nO valor total bruto das vendas � de: %.2f", valorTotalBruto);
    printf("\nA m�dia das vendas �: %.2f", mediaValores);
    printf("\nQuantidade de vendedores que venderam acima da m�dia: %d", maiorQueAMedia);
    printf("\nA maior comiss�o � de: %.2f recebida pelo vendedor: %s\n", maiorComissao, vendedorMaiorComissao);

    return 0;
}
