//  Objetivo: Fazer um algoritmo que verifica se três números poderiam ser um triângulo
//  Entrada: 3 numeros qualquer
//  Saída: triangulo ☂

#include<stdio.h> //Biblioteca para entrada e saída de dados
#include<locale.h> //Biblioteca para incluir linguagem

int main() {
    setlocale(LC_ALL, "Portuguese");

    double A, B, C;

    printf("Digite o valor do 'A': ");
    scanf("%lf", &A);
    printf("Digite o valor do 'B': ");
    scanf("%lf", &B);
    printf("Digite o valor do 'C': ");
    scanf("%lf", &C);

    if (A <= 0 || B <= 0 || C <= 0)
        printf("Digite apenas valores positivos!");

	else if (A < B + C and B < A + C and C < A + B){
        if (A == B && A == C)
		printf("Com os valores fornecidos a cima e possível construir com triangulo equilátero.");

		else if (A == B || B == C || A == C)
		printf("Com os valores fornecidos a cima e possível construir com triangulo isosceles.");

		else
		printf("Com os valores fornecidos a cima e possível construir com triangulo escaleno.");
    }

    else {
    	printf("Com os valores fornecidos a cima não sera possível construir com triangulo.");
	}


    return 0;
}
