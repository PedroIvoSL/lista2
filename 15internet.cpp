//  Objetivo: Faça um algoritmo em português estruturado que leia três valores numéricos e encontre qual o menor deles, mostrando-o no final.
//  Entrada: Numero inteiro qualquer
//  Saída: par ou impar

#include<stdio.h> //Biblioteca para entrada e saída de dados
#include<locale.h> //Biblioteca para incluir linguagem

int main() {
    setlocale(LC_ALL, "Portuguese");

    int horas, acrescimo;

    printf("Por quantas horas a internet foi utilizada?: ");
    scanf("%d", &horas);

    acrescimo = ((horas - 20) * 3) + 30;

    if (horas <= 0)
        printf("Informe um valor positivo!");
	else if (horas <= 20)
        printf("O valor a ser pago é 30 reais");
    else {
    	printf("O valor a ser pago é %d", acrescimo);
	}

    return 0;
}