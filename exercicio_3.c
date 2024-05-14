//Escreva um programa que leia um valor de despesa de restaurante, o valor da gorjeta (em
//porcentagem) e o número de pessoas para dividir a conta. Imprima o valor que cada um deve pagar.
//Assuma que a conta será dividida igualmente.

#include <stdio.h>

int main(){

    float despesas, gorjetas, valorTotal, valorPorPessoa;
    int pessoas;

    printf("\nDigite o valor total das despesas: ");
    scanf("%f", &despesas);

    gorjetas = despesas * 0.2;

    printf("\nValor da gorjeta: %.2f", gorjetas);

    printf("\nInforme a quantidade de pessoas: ");
    scanf("%d", &pessoas);

    valorTotal = despesas + gorjetas;
    
    printf("\nO valor total das despesas + gorjetas e: %.2f", valorTotal);

    valorPorPessoa = valorTotal / pessoas;

    printf("\nE o valor por pessoa sera de: %.2f", valorPorPessoa);

    
}