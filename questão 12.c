#include <stdio.h>
#include <stdlib.h>

int main() {
    int quantidadeNota, i;
    float nota, soma, media;        


 soma = 0;
    printf("Digite a quantidade de notas: ");
    scanf("%d", &quantidadeNota);

    if (quantidadeNota <= 0) {
        printf("Quantidade de notas inválida.\n");
        return 1;
    }

    for (i = 1; i <= quantidadeNota; i++) {
        printf("Digite a nota %d: ", i);
        scanf("%f", &nota);
        soma += nota;
    }

    media = soma / quantidadeNota;
    printf("A média das notas é: %.2f\n", media);

    return 0;
}