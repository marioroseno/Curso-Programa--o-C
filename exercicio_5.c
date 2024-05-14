//Crie um programa em C que permita fazer a conversão cambial entre Reais e Dólares. Considere
//como taxa de câmbio US$1,0 = R$5,30. Leia um valor em Reais e mostre o correspondente em
//Dólares.



#include <stdio.h>

int main(){

    float dollar = 2.0;
    float real = 5.30;
    float valorTemporario;

    printf("Qual o valor que voce quer converter para dolares?: ");
    scanf("%f", &valorTemporario);

    real = valorTemporario * dollar;

    printf("Valor a receber: %2.f", real);

   


}