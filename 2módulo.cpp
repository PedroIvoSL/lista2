//  Objetivo: Fazer um algoritmo que leia um número e apresente o seu módulo
//  Entrada: Número
//  Saída: Módulo do número

#include<stdio.h> //Biblioteca para entrada e saída de dados
#include<locale.h> //Biblioteca para incluir linguagem

int main() {
    setlocale(LC_ALL, "Portuguese");

    double numero, modulo; //Declaração de variáveis e o tipo

    printf("Informe número que você quer o módulo: ");
    scanf("%lf", &numero); //Guarda na memória o valor de variável

    if (numero > 0)
        printf("O módulo de %.3lf é: %.3lf", numero, numero);
    else{ //Condição para valores negativos
    	modulo = numero * (-1); //Cálculo para resolver módulo
    	printf("O módulo de %.3lf é: %.3lf", numero, modulo);
	}

    return 0;
}