#include <stdio.h>

int main()
{
    int investimento, anos, meses, i;
    float total, rendimento_mensal;
    
    printf("Entre com seu investimento: ");
    scanf("%d", &investimento);
    printf("Entre com o rendimento mensal (em decimal, ex: 0.01 para 1%%): ");
    scanf("%f", &rendimento_mensal);
    printf("Entre com quantos anos vao se passar: ");
    scanf("%d", &anos);
    
    meses = anos * 12;
    total = investimento;
    
    for(i = 0; i < meses; i++)
    {
        total += total * rendimento_mensal; // Juros compostos
    }
    
    printf("O total dos seus investimentos apos %d anos e de %.2f\n", anos, total);
    
    return 0;
}
