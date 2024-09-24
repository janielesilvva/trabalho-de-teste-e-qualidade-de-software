#include <stdio.h>
#include "calculadora.h"


int main() {
    double peso, altura, imc;

    // Solicita ao usuário que insira o peso e a altura
    printf("Digite o peso (em kg): ");
    scanf("%lf", &peso);

    printf("Digite a altura (em metros): ");
    scanf("%lf", &altura);

    // Calcula o IMC
    imc = calcularIMC(peso, altura);

    // Verifica se o cálculo foi bem-sucedido
    if (imc == -1) {
     return -1;
    }
    //Se o cálculo for realizado corretamente a parte de código a seguir mostra a classificaçao do IMC
    if (imc != -1) {
        printf("O IMC e: %.2lf\n", imc);
        if (imc<18.5){
            printf("\n Classificacao: Magreza ");
         }else if (imc >=18.5 && imc < 24.9){
            printf("\nClassificacao: Normal");
           }else if (imc >=24.9 && imc <29.9){
            printf("\nClassificacao: Sobrepeso ");
             }else {
                printf("\nClassificacao: Obesidade ");
             }

        }
    }

