#include <stdio.h>

int main() {
    char nome[50], tipo_ap;
    int diarias;
    float consumo_interno, valor_diaria = 0, total_diarias, subtotal, taxa_servico, total_geral;

  
    printf("Digite o nome do hóspede: ");
    scanf(" %[^\n]", nome); 

    printf("Digite o tipo do apartamento (A, B, C ou D): ");
    scanf(" %c", &tipo_ap);
    tipo_ap = toupper(tipo_ap); 

    printf("Digite o número de diarias utilizadas: ");
    scanf("%d", &diarias);

    printf("Digite o valor do consumo interno: R$ ");
    scanf("%f", &consumo_interno);


    switch(tipo_ap) {
        case 'A':
            valor_diaria = 350.00;
            break;
        case 'B':
            valor_diaria = 275.00;
            break;
        case 'C':
            valor_diaria = 200.00;
            break;
        case 'D':
            valor_diaria = 150.00;
            break;
        default:
            printf("Tipo de apartamento invalido!\n");
            return 1;
    }

 
    total_diarias = diarias * valor_diaria;
    subtotal = total_diarias + consumo_interno;
    taxa_servico = subtotal * 0.10;
    total_geral = subtotal + taxa_servico;

 
    printf("\n--- CONTA FINAL ---\n");
    printf("Hóspede: %s\n", nome);
    printf("Tipo do apartamento: %c\n", tipo_ap);
    printf("Valor total das diárias (%d diárias): R$ %.2f\n", diarias, total_diarias);
    printf("Valor do consumo interno: R$ %.2f\n", consumo_interno);
    printf("Subtotal: R$ %.2f\n", subtotal);
    printf("Taxa de serviço (10%%): R$ %.2f\n", taxa_servico);
    printf("TOTAL GERAL: R$ %.2f\n", total_geral);

    return 0;
}
