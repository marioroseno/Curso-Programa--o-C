#include <stdio.h>
#include <stdlib.h>
/*  Aula 11
    Lendo varias variaveis
*/
int main()
{
    char sexo;
    int idade;
    float peso, altura;



    printf (" \nQual sua idade? \n");
    scanf("%d", &idade);
    printf("\nQual seu peso? \n");
    scanf("%f", &peso);
    printf("\nQual sua altura? \n");
    scanf("%f", &altura);
    printf ("\nQual seu sexo? M ou F: \n");
    scanf(" %c", &sexo);

    printf("\nOs dados obtidos são esses: \n");
    printf("\nSexo: %c\n", sexo);
    printf("\nIdade: %d\n", idade);
    printf("\nPeso: %.2f\n", peso);
    printf("\nAltura: %.2f\n", altura);
    }
