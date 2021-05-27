//  Faça um algoritmo em português estruturado que leia o número de DDD e informe a qual cidade pertence
//  Entrada: DDD
//  Saída: Cidade

#include<stdio.h> //Biblioteca para entrada e saída de dados
#include<locale.h> //Biblioteca para incluir linguagem

int main() {
    setlocale(LC_ALL, "Portuguese");

    int ddd;

    printf("Informe o DDD da cidade: ");
    scanf("%d", &ddd);

    if (ddd == 61)
        printf("O DDD informado a cima e da cidade de Brasilía.");

	else if (ddd == 71)
		printf("O DDD informado a cima e da cidade de Salvador");

	else if (ddd == 11)
		printf("O DDD informado a cima e da cidade de São Paulo");

	else if (ddd == 21)
		printf("O DDD informado a cima e da cidade de Rio de Janeiro");

	else if (ddd == 32)
		printf("O DDD informado a cima e da cidade de Juiz de Fora");

	else if (ddd == 19)
		printf("O DDD informado a cima e da cidade de Campinas");

	else if (ddd == 27)
		printf("O DDD informado a cima e da cidade de Vitória");

	else if (ddd == 31)
		printf("O DDD informado a cima e da cidade de Belo Horizonte");

    else {
    	printf("DDD sem identificação");
	}
    return 0;
}