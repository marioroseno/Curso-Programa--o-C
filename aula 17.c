#include <stdio.h>
#include <stdlib.h>

/*
    Aula 17
    Operador short para o tipo int
    intervalo: -32.768 até 32.767
    %hi ou %d
*/

int main()
{
    short int x = 32767;
    int y = 0;

    printf("Tamanho de um inteiro na memoria: %d bytes\n", sizeof y);
    printf("Tamanho de um inteiro short: %d bytes\n", sizeof x);

    printf("\nValor de x: %d\n", x);

    //com incremnto de x++, ocorre um estouro de memoria e o numero passa a ser negativo
    x++;
    printf("\nValor de x: %hi\n", x);
}
