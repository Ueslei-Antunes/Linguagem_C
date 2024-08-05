#include <stdio.h>
#include <stdlib.h>

void limpar_entrada(){ //função usada para limpar o buffer para fazer a leitura de textos
    char c;
    while ((c = getchar()) != '\n' && c != EOF);
}
int main(int argc, char const *argv[])
{
    
    int idade1, idade2;
    char nome1[50], nome2[50];

    printf("Digite a idade 1: ");
    scanf("%d", &idade1);
    printf("Digite o nome 1: ");
    limpar_entrada();   // a função que foi criada
    fgets(nome1, 50, stdin);    //a leitura da variavel OBS: STDIN é apenas o lugar que está sendo feito a leitura dos dados, que é o terminal
    strtok(nome1, "\n");     // como o fgets lé até as 'quebra de linha' o STRTOK faz com que ele ignore todas as quebra de linha armazenando apenas os valores

    printf("Digite a idade 2: ");
    scanf("%d", &idade2);
    printf("Digite o nome 2: ");
    limpar_entrada();
    fgets(nome2, 50, stdin);
    strtok(nome2, "\n");

    float media;
    media = (idade1 + idade2) / 2.0;

    printf("\nIdade 1: %d", idade1);
    printf("\nNome 1: %s", nome1);
    printf("\nIdade 2: %d", idade2);
    printf("\nNome 2: %s", nome2);
    printf("\nA media das notas eh: %.2f", media);
    return 0;
}
