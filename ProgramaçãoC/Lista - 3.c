#include <stdio.h>

void main()
{
    int g;  
    float a, x;

    printf("Entre com o seu genero (1 para mulher, 0 para homem): ");
    scanf("%d", &g);

    printf("Entre com sua altura: ");
    scanf("%f", &a);

    if (g == 1);
   x = (62.1 * a) - 44.7;
    else
   x = (72.7 * a) - 58;

    printf("Seu peso ideal e: %.2f\n", x);
    
   
}