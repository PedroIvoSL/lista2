//  Objetivo: Ler a altura e apresentar o peso ideal da pessoa
//  Entrada: Altura
//  Saída: Peso ideal

#include<stdio.h> //Biblioteca para entrada e saída de dados
#include<locale.h> //Biblioteca para incluir linguagem

int main() {
    setlocale(LC_ALL, "Portuguese");

    char nome[25];
    int sexo;
    double altura, p1, p2;

    printf("Digite o seu nome: ");
    fgets(nome, 100, stdin);
    printf("Digite o seu sexo: \n");
    printf("1 para masculino \n");
    printf("2 para feminino \n");
    scanf("%d", &sexo);
    printf("Digite a sua altura: ");
    scanf("%lf", &altura);

    p1 = (72.5 * altura) - 58;
    p2 = (62.1 * altura) - 44.7;

    if (sexo == 1) //Condição para sexo masculino
        printf("\nIlmo. Sr. %sSeu peso ideal é %.2lf", nome, p1);

	else if (sexo == 2)  //Condição para sexo feminino
        printf("\nIlma. Sra. %sSeu peso ideal é %.2lf", nome, p2);

    else {
    	printf("Digite 1 ou 2");
	}


    return 0;
}