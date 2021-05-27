//  Objetivo: Faça um algoritmo em português estruturado que leia três valores numéricos e encontre qual o maior deles, mostrando-o no final.
//  Entrada: Numero inteiro qualquer
//  Saída: Maior Número
#include<stdio.h> //Biblioteca para entrada e saída de dados
#include<locale.h> //Biblioteca para incluir linguagem

int main() {
    setlocale(LC_ALL, "Portuguese");

    double A, B, C;
    char n1[50], n2[50], n3[50];

    printf("Informe nome da primeira pessoa: ");
    fgets(n1, 50, stdin);
    printf("Informe altura da primeira pessoa em formato M,CM: ");
    scanf("%lf", &A);
    fflush(stdin);
    printf("Informe nome da segunda pessoa: ");
    fgets(n2, 50, stdin);
    printf("Informe altura da segunda pessoa em formato M,CM: ");
    scanf("%lf", &B);
    fflush(stdin);
    printf("Informe o nome da terceira pessoa: ");
    fgets(n3, 50, stdin);
    printf("Informe altura da terceira pessoa em formato M,CM: ");
    scanf("%lf", &C);
    fflush(stdin);
    if (A <= 0 || B <= 0 || C <= 0)
        printf("\nPor favor informar valores maiores do que 0");
	else if (A < B && A < C)
        printf("\nA menor pessoa é %sCom %.2lf de altura", n1, A);
    else if (B < A && B < C)
        printf("\nA menor pessoa é %sCom %.2lf de altura", n2, B);
    else if (C < A && C < B)
    	printf("\nA menor pessoa é %sCom %.2lf de altura", n3, C);

    return 0;
}