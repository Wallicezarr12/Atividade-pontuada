#include <stdio.h>
#include <stdlib.h>

int main() {
    int codigo;
    int tentativa;


codigo = 1234;
    do {
        printf("Digite o código de acesso: ");
        scanf("%d", &tentativa);

        if (tentativa == codigo) {
            printf("Acesso permitido!\n");
            break;
        } else {
            printf("Código de acesso incorreto. Tente novamente.\n");
        }
    } while(1);

    return 0;
}               