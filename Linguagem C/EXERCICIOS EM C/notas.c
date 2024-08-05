#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float nota1, nota2, notafinal;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    notafinal = (nota1 + nota2) / 2;

    printf("\nNOTA FINAL: %.1f", notafinal);
    if (notafinal < 60.0)
    {
        printf("\nREPROVADO!");
    } else
        printf("\nAPROVADO!");
    
    return 0;
}