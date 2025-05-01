#include <stdio.h>

int main() {
    int dia, mes, dia_do_ano = 0;
    int dias_por_mes[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    printf("Digite o dia (1-31): ");
    scanf("%d", &dia);
    printf("Digite o mês (1-12): ");
    scanf("%d", &mes);

    // Verifica se a data é válida
    if (mes < 1 || mes > 12 || dia < 1 || dia > dias_por_mes[mes - 1]) {
        printf("Data inválida!\n");
        return 1;
    }

    // Calcula o dia do ano usando if-else
    if (mes == 1) {
        dia_do_ano = dia;
    }
    else if (mes == 2) {
        dia_do_ano = 31 + dia;
    }
    else if (mes == 3) {
        dia_do_ano = 31 + 28 + dia;
    }
    else if (mes == 4) {
        dia_do_ano = 31 + 28 + 31 + dia;
    }
    else if (mes == 5) {
        dia_do_ano = 31 + 28 + 31 + 30 + dia;
    }
    else if (mes == 6) {
        dia_do_ano = 31 + 28 + 31 + 30 + 31 + dia;
    }
    else if (mes == 7) {
        dia_do_ano = 31 + 28 + 31 + 30 + 31 + 30 + dia;
    }
    else if (mes == 8) {
        dia_do_ano = 31 + 28 + 31 + 30 + 31 + 30 + 31 + dia;
    }
    else if (mes == 9) {
        dia_do_ano = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + dia;
    }
    else if (mes == 10) {
        dia_do_ano = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + dia;
    }
    else if (mes == 11) {
        dia_do_ano = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + dia;
    }
    else if (mes == 12) {
        dia_do_ano = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + dia;
    }

    printf("%02d/%02d - %dº dia do ano\n", dia, mes, dia_do_ano);

    return 0;
}
