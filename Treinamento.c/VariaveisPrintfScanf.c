#include <stdio.h>

int main (){
   
    int idade;
    float altura;
    int peso;
    char nome [20];

printf("Digite a sua idade:");
scanf("%d", &idade);
printf("A idade é: %d\n", idade);

printf("Digite a sua altura:");
scanf("%f", &altura);
printf("A altura é: %f\n", altura);

printf("Digite o seu nome:");
scanf("%s", nome);
printf("O nome é: %s\n", nome);

printf("Digite o peso:");
scanf(" %d", &peso);
printf("O peso é: %d\n", peso);



}