#include <stdio.h>

int main()
{
    int numeros, contNegativo=0, contPositivo=0, i;
    float soma=0;
    for(i=1; i<5; i++)
    {printf("Entre com os números desejados: ");
    scanf("%d", &numeros);
    if (numeros < 0)
    {
        contNegativo++;
    }
    else
    {
        soma = soma + numeros;
        contPositivo++;
    }
    }
    soma = soma/contPositivo;
    printf("Voce digitou %d valores negativos!", contNegativo);
    printf("\n A media dos valores positivos e de %.2f", soma);

    return 0;
}
