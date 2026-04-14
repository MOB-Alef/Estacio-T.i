#include<stdio.h>
#include<stdbool.h>

int main(){
    /* C Booleans variavies */
    bool isProgrammingFun = true;
    bool isFishTasty = false;
    bool isHamburgerTasty = true;
    bool isPizzaTasty = true;
    
    /*Exemplo*/
    int x = 10;
    int y = 9;
    
    /*Amazenado Resultado de Comparacoes*/
    bool isGreanter = x > y;

    /* Print the values */
    printf("\n------Impressao de variaveis booleanas em C:------\n");
    printf("isProgrammingFun: %d\n", isProgrammingFun);
    printf("isFishTasty: %d\n", isFishTasty);


    /*Comparando valores e Variaveis*/
    printf("\n------Comparando valores booleanos:------\n");
    printf("Valor de x > y: %d\n\n", x > y); /* Imprime 1 (verdadeiro) se x for maior que y, caso contrário imprime 0 (falso) */

    /*Exemplo de igual*/
    printf("\n------Exemplo de igualdade:------\n");
    printf("Valor de x == y: %d\n", 10 == 10); /* Imprime 1 (verdadeiro) se x for igual a y, caso contrário imprime 0 (falso) */

    /*Lanchonete*/
    printf("\n------Lanchonete:------\n");
    printf("isHamburgerTasty: %d\n", isHamburgerTasty);
    printf("isPizzaTasty: %d\n\n", isPizzaTasty);

    /*Armazenando Resultado de Comparacoes*/
    printf("\n------Armazenando Resultado de Comparacoes:------\n");
    printf("isGreanter: %d\n", isGreanter);

    return 0;


}