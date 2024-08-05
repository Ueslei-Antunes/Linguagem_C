#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int x, y;

    printf("Digite dois numeros:\n");
    scanf("%d", &x);
    scanf("%d", &y);

    while (x != y)
    {
        if (x < y)
        {
            printf("CRESCENTE!\n");
        }else{
            printf("DECRESCENTE!\n");
        }
        printf("Digite dois numeros: ");
        scanf("%d", &x);
        scanf("%d", &y);
    }
    return 0;
}
