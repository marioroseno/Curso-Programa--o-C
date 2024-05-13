#include <stdio.h>
#include <math.h>

int main(){

    int a, b, x;

    

    printf("\nDigite um valor pra A: ");
    scanf("%d", &a);

    printf("\nAgora um valor para B: ");
    scanf("%d", &b);
    
    x = a;
    a = b;
    b = x;

    printf("\nO valor de A agora e: %d", a);

    printf("\nO valor de B agora e: %d", b);




    


}