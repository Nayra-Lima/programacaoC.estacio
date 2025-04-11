#include <stdio.h>

int main () {
    int idade = 25;   //int: valor inteiro
    int quantidade = 1;
    float altura = 1.75;  //float: ponto flutuante, casas decimais com vírgula, valores menores
    double peso = 90.3;   //double: casas decimais, mas com valores maiores
    char letra = 'A';   //char: caracteres somente um tipo
    char nome[20] = "nayra"; //char: tem que determinar a quantidade de caracter que pode armazenar
// declaração de variáveis, algumas regras: não se inicia uma variável com números,(somente letras e _)
// maisculo e minusculo definem variáveis diferentes. Não se usa palavras reservadas, como int, main...

    printf("A idade de %s é: %d\n", nome, idade); // (formato,variável)
    printf("A altura é: %.2f\n", altura);// /n é para pular linha
    printf("O peso é: %.2f\n", peso);
    printf("O nome é: %s\n", nome);

//printf é a saída de dados
/* % é o formato
%d = imprime valor inteiro decimal
%i = equivale a %d
%f = ponto flutuante formato padrão
%e = ponto flutuante notação cientifica
%c = imprime um unico caractere
%s = imprime uma cadeia de caracteres
*/
   


}