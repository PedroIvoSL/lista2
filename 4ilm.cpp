//  Objetivo: Fazer um algoritmo que  leia o nome e o sexo de uma pessoa e apresente como saída uma mensagem
//  Entrada: Nome e sexo
//  Saída: Ilmo. Sr. + nome ou Ilma. Sra. + nome

#include<stdio.h> //Biblioteca para entrada e saída de dados
#include<locale.h> //Biblioteca para incluir linguagem

int main() {
    setlocale(LC_ALL, "Portuguese");

    char nome[25];
    int sexo;

    printf("Informe o seu nome: ");
    fgets(nome, 25, stdin);
    printf("Informe o seu sexo: \n");
    printf("Digite 1 para masculino \n");
    printf("Digite 2 para feminino \n");
    scanf("%d", &sexo);

    if (sexo == 1)
        printf("Ilmo. Sr. %s", nome);
    else if (sexo == 2)
        printf("Ilma. Sra. %s", nome);
    else {
    	printf("Informe 1 para masculino ou 2 para feminino");
	}


    return 0;
}