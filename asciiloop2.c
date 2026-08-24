#include <stdio.h>

int main() {
    int num1, num2, i, caractere_num;
    char caractere;

    printf("Introduza dois Nº: ");
    scanf("%d %d", &num1, &num2);

    int c = num1;
    for (i=num1; i<=num2; i++) {
        printf("%d --> %c\n", c, i);
        c++;
    }

    return 0;
}
