//Uma empresa contrata um encanador a R$ 45,00 por dia. Faça um programa que solicite o
//número de dias trabalhados pelo encanador e imprima a quantia líquida que deverá ser paga,
//sabendo que são descontados 8% para imposto de renda.

#include <stdio.h>

int main(){

    float diarias, valorTotal, valorDesconto, valorPagar;

    printf("Digite o numero de diarias: ");
    scanf("%f", &diarias);

    valorTotal = diarias * 45;
    valorDesconto = valorTotal * 0.08;
    valorPagar = valorTotal - valorDesconto;

    printf("\nO valor total das diarias foi de: %.2f", valorTotal);
    printf("\nE o valor dos impostos: %.2f", valorDesconto);
    printf("\nValor total a receber: %.2f", valorPagar);
    


}