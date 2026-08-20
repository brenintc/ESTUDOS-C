#include <stdio.h>

int main() 
{
    unsigned char letra = 0;
    int contador = 0;
    char decisao;
    
    while (letra <= 255) {
        printf("%c - %d\n", letra, letra);
        letra++;
        contador++;
        
        if (contador == 20) {
            printf("\nDeseja continuar? (c/C para continuar): ");
            scanf(" %c", &decisao);
            
            if (decisao != 'C' && decisao != 'c') {
                break;
            }
            
            contador = 0;
            printf("\n");
        }
    }
    
    printf("\nFim do programa!\n");
    return 0;
}