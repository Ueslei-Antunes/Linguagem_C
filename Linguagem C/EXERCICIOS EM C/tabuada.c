#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int n;

    printf("Deseja a tabuada para qual valor? ");
    scanf("%d", &n);

    for (int i = 1; i < 11; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    } 
    return 0;
}