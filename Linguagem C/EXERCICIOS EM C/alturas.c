#include <stdio.h>
#include <stdlib.h>

void limpar_entrada(){
    char c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main(int argc, char const *argv[])
{
    int n, menores = 0;
    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &n);

    int idade[n];
    float altura[n], media, soma = 0, porc;
    char nome[n][50];

    for (int i = 0; i < n; i++)
    {
        printf("Dados da %da pessoa:\n", i+1);
        printf("Nome: ");
        limpar_entrada();
        gets(nome[i]);
        printf("Idade: ");
        scanf("%d", &idade[i]);
        printf("Altura: ");
        scanf("%f", &altura[i]);
    } 

    for (int i = 0; i < n; i++)
    {
        soma += altura[i];
    }
    media =(float) soma / n;
    printf("\nAltura media: %.2f", media);
    
    for (int i = 0; i < n; i++)
    {
        if (idade[i] < 16)
        {
            menores++;
        }
    }

    porc =(float) (menores * 100) / n;
    printf("\nPessoas com menos de 16 anos: %.1f %%", porc);

    for (int i = 0; i < n; i++)
    {
        if (idade[i] < 16)
        {
            printf("\n%s", nome[i]);
        }
    }
    

    return 0;
}
