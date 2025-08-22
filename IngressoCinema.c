

#include <stdio.h>
#include <stdlib.h>

int main() {
    int escolha, quantidade;
    float total;

    // Lista de filmes e preços
    char *filmes[] = {
        "Vingadores: Ultimato",
        "Homem-Aranha: Sem Volta para Casa",
        "Batman",
        "Super Mario Bros"
    };
    float precos[] = {25.0, 22.0, 20.0, 18.0};

    printf("🎬 Bem-vindo ao Cinema ADS 🎬\n");
    printf("Filmes em cartaz:\n\n");

    // Mostrar filmes
    for (int i = 0; i < 4; i++) {
        printf("%d - %s (R$ %.2f)\n", i + 1, filmes[i], precos[i]);
    }

    // Escolha do filme
    printf("\nDigite o número do filme desejado: ");
    scanf("%d", &escolha);

    if (escolha < 1 || escolha > 4) {
        printf("Opção inválida! Encerrando...\n");
        return 0;
    }

    // Quantidade de ingressos
    printf("Quantos ingressos para '%s'? ", filmes[escolha - 1]);
    scanf("%d", &quantidade);

    total = quantidade * precos[escolha - 1];

    // Comprovante
    printf("\n--- Comprovante de Compra ---\n");
    printf("Filme: %s\n", filmes[escolha - 1]);
    printf("Ingressos: %d\n", quantidade);
    printf("Preço unitário: R$ %.2f\n", precos[escolha - 1]);
    printf("Total a pagar: R$ %.2f\n", total);
    printf("------------------------------\n");
    printf("Obrigado pela compra! Bom filme! 🍿\n");

    return 0;
}

