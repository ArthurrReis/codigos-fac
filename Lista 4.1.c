#include <stdio.h>

int main()
{
    int n, y, i, multiplo;
    printf("Entre com o valor de N: ");
    scanf("%d", &n);
    printf("Entre com o valor de Y: ");
    scanf ("%d", &y);
    
    for (i=1; i<n; i++)
    {
        multiplo = y*i;
        if(multiplo < n)
       { printf("%d ", multiplo);
           
       }
    }
    
}
