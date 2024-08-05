#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int n1, n2, soma = 0;

    printf("Digite dois numeros\n");
    scanf("%d", &n1);
    scanf("%d", &n2);

    if (n1 > n2)
    {
        int troca;
        troca = n1;
        n1 = n2;
        n2 = troca;
    }

    for (int i = n1+1; i < n2; i++)
    {
        if (i % 2 != 0)
        {
            soma += i;
        }
    }

    printf("\nSOMA DOS IMPARES: %d", soma);
    
    return 0;
}