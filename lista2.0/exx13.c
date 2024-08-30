#include <stdio.h>

int main() {
    int estoque_atual, max_estoque, min_estoque;
    float quantidade_media;

    // Leitura das quantidades
    printf("Digite a quantidade atual em estoque: ");
    scanf("%d", &estoque_atual);

    printf("Digite a quantidade maxima em estoque: ");
    scanf("%d", &max_estoque);

    printf("Digite a quantidade minima em estoque: ");
    scanf("%d", &min_estoque);

    // Cálculo da quantidade média
    quantidade_media = (max_estoque + min_estoque) / 2.0;

    // Exibição da quantidade média
    printf("Quantidade media em estoque: %.2f\n", quantidade_media);

    // Decisão sobre efetuar compra
    if (estoque_atual >= quantidade_media) {
        printf("Nao efetuar compra\n");
    } else {
        printf("Efetuar compra\n");
    }

    return 0;
}
