#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main()
{
    float base, altura, area, perimetro, diagonal;

    printf("Digite a base do retangulo: ");
    scanf("%f", &base);
    printf("Digite a altura do retangulo: ");
    scanf("%f", &altura);

    area = base * altura;
    perimetro = (base + altura) * 2;
    diagonal = sqrt (pow(base, 2.0) + pow(altura, 2.0));

    printf("\nArea = %.4f", area);
    printf("\nPerimetro = %.4f", perimetro);
    printf("\nDiagonal = %.4f", diagonal);
    return 0;
}
