//  Objetivo: Fazer um algoritmo que informe se o motorista será multado caso o mesmo tiver ultrapassado o limite de velocidade
//  Entrada: Velocidade e placa
//  Saída: Multa

#include<stdio.h> //Biblioteca para entrada e saída de dados
#include<locale.h> //Biblioteca para incluir linguagem

int main() {
    setlocale(LC_ALL, "Portuguese");

    char placa[8];
	int velocidade;

    printf("Informe a placa do veiculo: ");
    fgets(placa, 8, stdin); //Guarda na memória o valor da variável
	printf("Informe a velocidade do veiculo: ");
    scanf("%d", &velocidade); //Guarda na memória o valor de variável

	if (velocidade >80) //Condição para avaliar se haverá multa
        printf("O veiculo ultrapassou a velocidade permitida, logo uma multa sera aplicada ao veiculo");
    else {
    	printf("O veiculo não ultrapassou a velocidade permitida, logo nenhuma multa sera aplicada ao veiculo");
	}
    return 0;
}