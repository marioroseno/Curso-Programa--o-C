#include <stdio.h>
#include <stdlib.h>

/*  Aula 9
    lendo caracters
    fun��o fgetc();
*/

int main()
{
    char letra;

    printf("\nDigite um caracter: \n");
    letra = fgetc(stdin);

    printf("\nCaracter digitado: %c\n", letra);
}
