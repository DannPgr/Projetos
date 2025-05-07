#include <stdio.h>

int main(){
    int soma, num1, num2;

    printf("Digite um número:\n");
    scanf("%d",&num1);

    printf("Digite outro número:\n");
    scanf("%d",&num2);
    
    soma = num1 * num2;

    printf("A soma de %d e %d é: %d.\n",num1,num2,soma);

    return 0;

}
