#include <stdio.h>
#include <stdlib.h>

int main() {
    float nota;

    printf("Digite a nota do aluno: ");
    scanf("%f", &nota);

    if (nota >= 9.0) {
    printf("Excelente \n");
    } else if (nota >= 7.0 && nota < 9.0) {
        printf("Bom \n");
    } else if (nota >= 5.0 && nota < 7.0) {
        printf("Razoável \n");
    } else {
        printf("Insuficiente \n");
    }








    return 0;
}