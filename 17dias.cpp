//  Objetivo: faça um algoritmo que leia o ano de nascimento de uma pessoa e o ano atual, depois calcule e escreva o nome e o número de dias, aproximados, já vividos por essa pessoa
//  Entrada: Ano de nascimento e Ano atual
//  Saída: Idade
#include<stdio.h> //Biblioteca para entrada e saída de dados
#include<locale.h> //Biblioteca para incluir linguagem

int main() {
    setlocale(LC_ALL, "Portuguese");

    int ano, nascimento, dias, idade;
    char nome[50];

    printf("Olá!\n");
    printf("Porfavor digite seu nome: ");
    fgets(nome, 50, stdin);
    printf("Digite ano de nascimento: ");
    scanf("%d", &nascimento);
    printf("Digite ano atual: ");
    scanf("%d", &ano);
    fflush(stdin);

    dias = (ano - nascimento) * 365;
    idade = (ano - nascimento);

    if(ano <= 0 || nascimento <= 0)
        printf("Porfavor digite um ano valido!");

	else{
	    if (ano < nascimento)
        	printf("Porfavor preencha corretamente os dados solicitados");
        else{
            printf("\n%sJá viveu %d dias", nome, dias);
            printf("\nE tem aproximadamente %d anos de idade", idade );
            }
    }
    return 0;
}
((((((((((()))))))))))