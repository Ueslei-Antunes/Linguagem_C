#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int n, j = 0, i, m = 0;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);

    int vet[n];
    for (i = 0; i < n; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
    }

    printf("\nNUMEROS NEGATIVOS:\n");
    for (i = 0; i < n; i++)
    {
       if (vet[i] < 0)
       {
            printf("%d\n", vet[i]);
       }
    }
    
    return 0;
}