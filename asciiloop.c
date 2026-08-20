#include <stdio.h>

int main() 
{
    unsigned char c = 65;
    int letra;
    
    for (letra = 0; letra <= 255; letra++) {
        printf("%c - %d\n", c, letra);
        c++;
        
        if (letra == 20) {
            char decisao;
            printf("\nDeseja continuar? (c/C para continuar): ");
            scanf(" %c", &decisao);
            
            if (decisao != 'C' && decisao != 'c') {
                break;
            }
        }
    }
    
    return 0;
}