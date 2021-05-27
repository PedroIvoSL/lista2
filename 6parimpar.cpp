//  Objetivo: Escrever um algoritmo que determine se um número inteiro qualquer é PAR ou IMPAR.
//  Entrada: Numero inteiro qualquer
//  Saída: par ou impar

#include<stdio.h> //Biblioteca para entrada e saída de dados
#include<locale.h> //Biblioteca para incluir linguagem

int main(){
    setlocale(LC_ALL, "Portuguese");

    int numero;

    printf("Digite o número qual voce queira saber se e par ou impar: ");
    scanf("%d", &numero);

    if (numero%2 == 0)
        printf("Número par!");
    else if (numero == 0)
        printf("Número par!");
    else{
        printf("Número impar!");
    }

    return 0;
}
