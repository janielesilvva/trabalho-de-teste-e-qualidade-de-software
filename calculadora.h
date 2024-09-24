#include <stdio.h>
#include "minunit.h"

// Função para calcular o IMC
double calcularIMC(double peso, double altura) {
    if (peso <= 0) {
        printf("Peso invalido.\n");
        return -1; 
    }
    if (altura <= 0 || altura > 3.5) {
     printf("Altura invalida.\n");
     return -1; 
    } 
    double imc = (peso) / (altura * altura);
    return ((int)(imc * 100 + 0.5)) / 100.0;
    //return (peso) / (altura * altura);
    
}

