#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);

    float vet[n], media;
    for (int i = 0; i < n; i++)
    {
        printf("Digite um numero: ");
        scanf("%f", &vet[i]);
    }
        
    printf("Valores:");
    for (int i = 0; i < n; i++)
    {
        printf(" %.1f ", vet[i]);
    }

    
    float soma = 0;
    for (int i = 0; i < n; i++)
    {
        soma += vet[i];
    }
    printf("\nSoma: %.2f", soma);

    media =(float) soma / n;
    printf("\nMedia: %.2f", media);

    return 0;
}