#include <stdio.h>

#define SIGNO campo_bits.signo
#define EXPONENTE campo_bits.exponente
#define MANTIZA campo_bits.mantiza
#define BYTE 4

#define EXPO_INICIAL 127
#define EXPO EXPONENTE - EXPO_INICIAL

typedef union {
    struct {
        unsigned int mantiza : 23;
        unsigned int exponente : 8;
        unsigned int signo : 1;
    }campo_bits;
    
    float valor;
    unsigned char byte [BYTE];
    
}data_t;

int main(void) {
    data_t var;
    var.valor = 9.75;

    printf("Bienvenido al programa\n\n");
    
    if (var.SIGNO == 1){
        printf("El número es negativo \n");
    }
    else{
        printf("El número es positivo \n");
    }
    
    printf("El exponente vale: %u, en IEEE 754 \n", var.EXPONENTE);
    printf("El exponente vale: %u \n", var.EXPO);
    printf("La mantiza es: %u \n", var.MANTIZA);
    
    printf("El número segun IEEE 754 es: ");
    
    for(int i = 3; i >= 0; i--){
        
        if (var.byte[i] < 0x10){ //si el primer caracter del hexa es 0, normalmente no lo printea
            printf("0");
        }
        printf("%X", var.byte[i]);
    } //con el anterior if soluciono el problema de no printear un 0 faltante (probar con 3.1416 sin el if)
    
      return 0;
}