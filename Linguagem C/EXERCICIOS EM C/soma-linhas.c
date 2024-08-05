#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int n, m;

    printf("Quantas linhas a matriz tera? ");
    scanf("%d", &m);
    printf("Quantas colunas a matriz tera? ");
    scanf("%d", &n);

    float matriz[m][n], vet[m];

    for (int i = 0; i < m; i++)
    {
        printf("Digite os elementos da %da linha:\n", i + 1);
        for (int j = 0; j < n; j++)
        {
            scanf("%f", &matriz[i][j]);
        }
    }
    
    for (int i = 0; i < m; i++)
    {
        vet[i] = 0;
        for (int j = 0; j < n; j++)
        {
            vet[i] += matriz[i][j];
        }
    }

    printf("Vetor Gerado:\n");
    for (int i = 0; i < m; i++)
    {
        printf("%.2f\n", vet[i]);
    }
    
    return 0;
}