#include <stdio.h>

int main() {
    printf("Digite o valor da hora de trabalho: ");
    scanf("%f", &valor_hora);
  
    if (horas_trabalhadas <= 40) {
        salario = horas_trabalhadas * valor_hora;
    } else {
        float horas_extras = horas_trabalhadas - 40;
        salario = (40 * valor_hora) + (horas_extras * valor_hora * 1.5);
    }


    printf("O salário semanal é: %.2f\n", salario);

    return 0;
}
