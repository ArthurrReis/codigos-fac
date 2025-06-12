#include <stdio.h>

int main()

{
    int valor,centena, dezena, unidade, temp, soma;
    printf("Entre com o número: ");
    scanf("%d", &valor);
    if (valor >= 100 && valor <= 999)
    {
        centena= valor/100;
        dezena= valor%100;
        unidade= dezena%10;
        dezena= dezena/10;
    
    if (centena > dezena) {
            temp = centena;
            centena = dezena;
            dezena = temp;
        }
        
    
        if (centena > unidade) {
            temp = centena;
            centena = unidade;
            unidade = temp;
        }
        
        
        if (dezena > unidade) {
            temp = dezena;
            dezena = unidade;
            unidade = temp;
        }
        
        // Reconstrói o número ordenado
        soma = centena * 100 + dezena * 10 + unidade;
        
        printf("O número com algarismos em ordem crescente é: %d\n", soma);
    } 
    else 
    printf("O numero e invalido,tente novamente com um numero entre 100 e 999");
}
