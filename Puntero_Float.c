/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>

void ingresaDatos (float *);


int main (void) {
    
    float varfloat; 
    unsigned char * pchar = &varfloat;
    pchar += 3;
    
    ingresaDatos (&varfloat);
    for (unsigned char i = 4; i > 0; i--){
        printf("Byte numero %u es igual a: %X\n", i, * pchar--);
    }
}
void ingresaDatos (float * varfloat){

    printf("Ingresa tu numero con coma (float): ");
    scanf("%f", varfloat);
}

