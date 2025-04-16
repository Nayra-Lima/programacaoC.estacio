#include<stdio.h>

int main () {

    int idade, matricula;
    char nome [50];
    float altura;

    printf("CADASTRO DE ALUNOS:\n");

    printf("Digite o seu nome:");
    scanf("%s", nome);
   

    printf("Digite a sua idade:");
    scanf("%d", &idade);
    

    printf("Digite a sua altura:");
    scanf("%f", &altura);
    

    printf("Digite a sua matricula:");
    scanf("%d", &matricula);

    printf("CADASTRO DE ALUNOS:\n");
   
    printf("O nome é: %s\n", nome);
    printf("A idade é: %d\n", idade);
    printf("A altura é: %f \n", altura);
    printf("A matricula é: %d", matricula);

    return 0;

}