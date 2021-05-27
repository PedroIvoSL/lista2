//  Objetivo: Fazer um algoritmo que verifica se três números poderiam ser um triângulo
//  Entrada: Três números
//  Saída: Se pode ser ou não um triângulos

#include<stdio.h> //Biblioteca para entrada e saída de dados
#include<locale.h> //Biblioteca para incluir linguagem
int main() {
    setlocale(LC_ALL, "Portuguese");

    double A, B, C;
    printf("Informe o valor A: ");
    scanf("%lf", &A);
    printf("Informe o valor B: ");
    scanf("%lf", &B);
    printf("Informe o valor C: ");
    scanf("%lf", &C);

    if (A <= 0 || B <= 0 || C <= 0)
        printf("Favor, informe valores positivos!");
	else if (A < B + C and B < A + C and C < A + B)
        printf("Com os valores fornecidos, sera possível a construção de um triangulo.");
    else { //Condição para não triângulo
    	printf("Com os valores fornecidos, não sera possível a construção de um triangulo.");
	}
    return 0;
}