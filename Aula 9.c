#include <stdio.h>
#include <stdlib.h>

/*  Aula 10
    Lendo varios Valores
*/

int main()
{
    int num1, num2, num3;

    printf("\nDigite tres numeros: \n");
    scnaf("%d%d%d", &num1, &num2, &num3);

    printf("\nNumeros lidos: %d, %d e %d \n", num1, num2, num3);
}
