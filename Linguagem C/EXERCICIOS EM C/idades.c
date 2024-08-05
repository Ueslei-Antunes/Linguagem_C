#include <stdlib.h>
#include <stdio.h>

void limpar_entrada(){
    char c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main(int argc, char const *argv[])
{
    int idade1, idade2;
    char nome1[50], nome2[50];
    float media;

    printf("Dados da primeira pessoa:");
    printf("\nNome: ");
    gets(nome1);
    printf("Idade: ");
    scanf("%d", &idade1);

    printf("Dados da segunda pessoa:");
    printf("\nnome: ");
    limpar_entrada();
    gets(nome2);
    printf("Idade: ");
    scanf("%d", &idade2);

    media =(float) (idade1 + idade2) / 2;

    printf("\nA idade media de %s e %s eh de %.1f anos", nome1, nome2, media);

    return 0;
}
