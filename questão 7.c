#include <stdio.h>
#include <stdlib.h>

int main() {

    int opcao;

    printf("Menu:\n");
    printf("1 - Novo jogo\n");
    printf("2 - Carregar jogo\n");
    printf("3 - Configuracoes\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Carregando novo jogo...\n");
          
            break;
        case 2:
            printf("Carregando jogo...\n");
          
            break;
        case 3:
            printf("Acessando as configuracoes...\n");
            
            break;
        default:
            printf("Opcao invalida!\n");
            break;
    }







    return 0;
}