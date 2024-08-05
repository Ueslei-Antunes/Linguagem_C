#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int idade, soma = 0,i = 0; 
    float media;

    printf("Digite as idades:\n");
    scanf("%d", &idade);

    while (idade >= 0)
    {
        soma += idade;
        i++;
        scanf("%d", &idade);
    }
    if (i == 0)
    {
        printf("impossivel calcular.\n");
    }else{
        media =(float) soma / i;
        printf("\nMedia: %.2f", media);
    }
    return 0;
}
