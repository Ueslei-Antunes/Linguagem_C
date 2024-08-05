#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int n, i ,j, menor = 0;
    printf("Qual eh a ordem da matriz? ");
    scanf("%d", &n);

    int matriz[n][n];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Elementro:[%d, %d]", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Diagonal principal:\n");
    for (i = 0; i < n; i++)
    {
        printf(" %d ", matriz[i][i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (matriz[i][j] < 0)
            {
                menor += 1;
            }
        }
    }

    printf("\nQuantidade de negativos: %d", menor);
    
    return 0;
}