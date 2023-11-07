#include <stdio.h>
#include <stdlib.h>

int main() {
    float numeroum, numerodois, resultado;
    char conta;

    printf("Digite o primeiro numero: ");
    scanf("%f", &numeroum);

    printf("Digite o segundo numero: ");
    scanf("%f", &numerodois);

    printf("Digite a operaçao desejada (+ ou -): ");
    scanf(" %c", &conta);





    switch (conta) {
        case '+':
            resultado = numeroum + numerodois;
            printf("resultado da adicao: %.2f\n", resultado);
            break;
        case '-':
            resultado = numeroum - numerodois;
            printf("resultado da subtracao: %.2f\n", resultado);
            break;
        default:
            printf("Operaçao invalida!\n");
            break;
    }









  return 0;
}