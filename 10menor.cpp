//  Objetivo: Faça um algoritmo em português estruturado que leia três valores numéricos e encontre qual o menor deles, mostrando-o no final.
//  Entrada: Numero inteiro qualquer
//  Saída: par ou impar

#include<stdio.h> //Biblioteca para entrada e saída de dados
#include<locale.h> //Biblioteca para incluir linguagem

int main() {
    setlocale(LC_ALL, "Portuguese");

    double A, B, C;

    printf("Informe primeiro valor: ");
    scanf("%lf", &A);
    printf("Informe segundo valor: ");
    scanf("%lf", &B);
    printf("Informe terceiro valor: ");
    scanf("%lf", &C);

    if (A < B && A < C)
        printf("%.3lf é o menor número", A);
    else if (B < A && B < C)
        printf("%.3lf é o menor número", B);
    else if (C < A && C < B)
    	printf("%.3lf é o menor número", C);

    return 0;
}