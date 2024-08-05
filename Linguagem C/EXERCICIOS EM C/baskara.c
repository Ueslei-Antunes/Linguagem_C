#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float a, b, c, delta, x1, x2; 

    printf("Digite os coeficientes A, B e C respectivamente:\n");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    delta = pow(b, 2.0) - (4 * a *c);

    if (a == 0 || delta < 0)
    {
        printf("Essa equacao nao possui raizes reais\n");
    }else{
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("\nX1: %.4f", x1);
        printf("\nX2: %.4f", x2);
    }
    return 0;
}
