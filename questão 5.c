#include <stdio.h>
#include <stdlib.h>

int main() {
    int Idioma;

    printf("Escolha um idioma de preferencia:\n");
    printf("1 - Ingles\n");
    printf("2 - Frances\n");
    printf("3 - Espanhol\n");
    scanf("%d", &Idioma);

    switch (Idioma) {
        case 1:
            printf("Welcome! \n");
            break;
        case 2:
            printf(" Bienvenue! \n");
            break;
        case 3:
            printf("¡Bienvenido! \n");
            break;
        default:
            printf("Opção invalida!\n");
            break;
    }

    return 0;
}