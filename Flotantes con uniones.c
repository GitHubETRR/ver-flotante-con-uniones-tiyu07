#include <stdio.h>

typedef union{
    float valor;
    unsigned char byte[4];
}var_t;

int main(void) {
    var_t var;
    var.valor = 12.5;

    printf("El número segun IEEE 754 es: ");
    
    for(int i = 3; i >= 0; i--){
        
        printf("%X", var.byte[i]);
        
        if (var.byte[i] == 0){
            
            printf("0");
        }
    }
    return 0;
}
