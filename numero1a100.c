// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int num;
    printf("Introduza um Nº: ");
    scanf("%d", &num);

    if (num < 1 || num > 100) {
        printf("Digite um valor que esteja entre 1 e 100");
    } else {
        printf("Número digitado: %d", num);
    }

    return 0;
}
