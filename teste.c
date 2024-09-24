#include "minunit.h"
#include "calculadora.h" 


 
MU_TEST( test_calculo_normal) {
 double imc = calcularIMC(70, 1.75);
   mu_assert_double_eq( 22.86, imc);  
}

MU_TEST_SUITE(test_suite) {
    MU_RUN_TEST(test_calculo_normal);  
}

 
MU_TEST(test_peso_zero) {
    double imc = calcularIMC(0, 1.75);
    mu_assert_double_eq(-1, imc);
}

MU_TEST_SUITE(test_suite2) {
    MU_RUN_TEST(test_peso_zero);
    
}

 MU_TEST(test_altura_negativa) {
 double imc = calcularIMC(70, -1.75);
   mu_assert_double_eq( -1, imc);
}

MU_TEST_SUITE(test_suite3) {
    MU_RUN_TEST(test_altura_negativa);
}


int main() {
    MU_RUN_SUITE(test_suite);
    MU_RUN_SUITE(test_suite2);
    MU_RUN_SUITE(test_suite3);
    MU_REPORT();
    return 0;  // Retorna 0 se todos os testes passaram
}