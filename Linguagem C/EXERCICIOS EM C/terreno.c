#include <stdlib.h>
#include <stdio.h>

int main()
{
    float lar, com, valor, preco, area;

    printf("Digite a largura do terreno: ");
    scanf("%f", &lar);
    printf("Digite o comprimento do terreno: ");
    scanf("%f", &com);
    printf("Digite o valor do metro quadrado: ");
    scanf("%f", &valor);

    area = lar * com;
    preco = valor * area;

    printf("\nArea do terreno: %.2f", area);
    printf("\nPreco do terreno: %.2f", preco);
    return 0;
}
