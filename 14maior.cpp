//  Objetivo: Faça um algoritmo em português estruturado que leia três valores numéricos e encontre qual o maior deles, mostrando-o no final.
//  Entrada: Numero inteiro qualquer
//  Saída: Maior Número
#include<stdio.h> //Biblioteca para entrada e saída de dados
#include<locale.h> //Biblioteca para incluir linguagem

int main() {
    setlocale(LC_ALL, "Portuguese");

    double A, B, C;

    printf("Digite o valor de \"A\": ");
    scanf("%lf", &A);
    printf("Digite o valor de \"B\": ");
    scanf("%lf", &B);
    printf("Digite o valor de \"C\": ");
    scanf("%lf", &C);



    if (A > B && A > C)
        printf("%.3lf é o maior número", A);
    else if (B > A && B > C)
        printf("%.3lf é o maior número", B);
    else if (C > A && C > B)
    	printf("%.3lf é o maior número", C);

    return 0;
}