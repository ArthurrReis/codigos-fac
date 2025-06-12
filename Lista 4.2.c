#include <stdio.h>

int main() {
    int i, j, soma = 0;
    int tamanho = 50; // Até 50
    
    for(i = 1, j = tamanho; i <= tamanho; i++, j--) {
        // Imprime o número crescente
        printf("%d", i);
        soma += i;
        
        // Se não for o último par, imprime vírgula e o número decrescente
        if(i < tamanho) {
            printf(", ");
            
            // Imprime o número decrescente
            printf("%d", j);
            soma += j;
            
            // Se não for o último par, imprime outra vírgula
            if(i < tamanho - 1) {
                printf(", ");
            }
        }
    }
    
    printf("\nSoma total: %d\n", soma);
    
    return 0;
}
