#include <stdio.h>

int main(){
    int idade, matricula;
    float altura;
    char nome [50];

    printf("Digite sua idade: \n");
    scanf("%d", &idade);

    printf("Digite sua altura: \n");
    scanf("%f", &altura);

    printf("Digite seu nome: \n");
    scanf("%s", &nome);

    printf("Digite sua matrícula: \n");
    scanf("%d", &matricula);

    printf("Aluno: %s\nIdade: %d\nAltura: %.2f\nMatrícula: %d\n", nome, idade, altura, matricula);

    return 0;
}