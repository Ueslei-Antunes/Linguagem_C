#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int n1, n2, n3;

    printf("digite o primero Valor: ");
    scanf("%d", &n1);
    printf("Digite o segundo valor: ");
    scanf("%d", &n2);
    printf("Digite o terceiro valor: ");
    scanf("%d", &n3);

    if (n1 < n2 && n1 < n3)
    {
        printf("\nMENOR: %d", n1);
    }else if (n2 < n3)
    {
        printf("\nMENOR: %d", n2);
    }else
        printf("\nMENOR: %d", n3);
    
    return 0;
}
