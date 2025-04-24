#include <stdio.h>

int main() 
{
    int idade;

    printf("Entre com a idade: ");
    scanf("%d", &idade);

    if 
    (idade < 5) 
        printf("Infantil A");
    
    else 
    if (idade < 8)
        printf("Infantil B");
    
    else
     if (idade < 11) 
        printf("Infantil C");
    
    else
     if (idade < 14) 
        printf("Juvenil A");
    
    else
     if (idade < 18) 
        printf("Juvenil B");
    
    else
        printf("Adulto");

    return 0; 
}
