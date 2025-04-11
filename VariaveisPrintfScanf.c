#include <stdio.h>

int main (){
   
    int idade;
    float altura;
    double peso;
    char nome [20];

printf("Digite a sua idade:");
scanf("%d", &idade);
printf("A idade é: %d\n", idade);

printf("Digite a sua altura:");
scanf("%.2f", &altura);
printf("A altura é: %.2f\n", altura);

printf("Digite o peso:");
scanf("%.2f", &peso);
printf("O peso é: %.2f\n", peso);

printf("Digite o seu nome:");
scanf("%s", nome);
printf("O nome é: %d\n", nome);

}