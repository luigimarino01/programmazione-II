#include "stdio.h"
#include "stdlib.h"
void scambiaBit(int , int , int);
void print_integer_bit(int );

void main(int argc, char*argv[]) {
    if (argc<4)
    {
        printf("Hai sbagliato ad inserire i parametri.");
    }
    int numero = atoi(argv[1]);
    int p1 = atoi(argv[2]); //atoi = alphanumeric to integer
    int p2 = atoi(argv[3]);
    printf("numero in binario:\n");
    print_integer_bit(numero);
    scambiaBit(numero,p1,p2);
    printf("\n");
    
}


void scambiaBit(int numero, int b1, int b2) {
    unsigned char bit_1 = (numero>>b1) & 1;
    unsigned char bit_2 = (numero>>b2) & 1;
    printf("bit_1 = %d\n",bit_1);
    printf("bit_2 = %d\n",bit_2);
    unsigned char xor_of_bits = bit_1^bit_2;
    numero = numero^(xor_of_bits<<b1);
    numero = numero^(xor_of_bits<<b2);
    printf("numero scambiato: \n");
    print_integer_bit(numero);
}

//stampa bit di un int
void print_integer_bit(int n){
unsigned i;
for (i = 1<<31; i > 0; i = i/2)
{
    (n&i) ? printf("1") : printf("0");

}
printf("\n");
}
