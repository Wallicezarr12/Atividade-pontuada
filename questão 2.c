#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {

setlocale(LC_ALL,"portuguese");
    float valor;
    float desconto;
    char Semana;

    printf("Digite o valor do Produto: ");
    scanf("%f", &valor);

    printf("Digite o dia da semana da compra do produto (1 para dia de semana, 2 para fim de semana): ");
    scanf(" %c", &Semana);


    if (valor > 100) {
        if (Semana == '1') {
            desconto = valor * 0.1;
            printf("Desconto: %.2f \n", desconto);
        } 
        else if (Semana == '2') {
            desconto = valor* 0.15;
            printf("Desconto:  %.2f \n", desconto);
        } 
        else {
            printf("Dia da semana inválido! \n");
        }
    }    else {
        
        printf("Valor do Produto nao atende ao valor minimo para desconto.\n");
    }

    return 0;
} 
