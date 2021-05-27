//  Objetivo: Ler dois valores numéricos e apresentar a diferença do maior valor pelo menor.
//  Entrada: Numero inteiro qualquer
//  Saída: diferença entre os dois numeros

#include<stdio.h> //Biblioteca para entrada e saída de dados
#include<locale.h> //Biblioteca para incluir linguagem

int main() {
    setlocale(LC_ALL, "Portuguese");

    double A, B, d1, d2;

    printf("Informe o número 'A': ");
    scanf("%lf", &A);
    printf("Informe o número 'B': ");
    scanf("%lf", &B);

    d1 = A - B;
    d2 = B - A;

    if (A > B)
        printf("%.2lf - %.2lf = %.2lf", A, B, d1);

    else if (B > A)
        printf("%.2lf - %.2lf = %.2lf", B, A, d2);

    return 0;
}