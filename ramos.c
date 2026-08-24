#include <stdio.h>

int main() {
    int i, j, qtd_de_linha = 1, ramos;

    printf("Introduza o Nº de ramos: ");
    scanf("%d", &ramos);

    for (i=1; i<=ramos; i++) { 
        for (j=0; j<qtd_de_linha; j++) {
            printf("*");
        }
        printf("\n");
        qtd++;
    }

    return 0;
}
