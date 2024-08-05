#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, j, i;

    printf("Quantasl linhas tem na matriz? ");
    scanf("%d", &m);
    printf("Quantas colunas tem na matriz? ");
    scanf("%d", &n);

    int mat[m][n];

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Digite um numero para a posicao [%d, %d] da matriz: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\nMatriz digitada:\n");

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}