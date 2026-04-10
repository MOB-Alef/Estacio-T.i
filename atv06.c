#include<stdio.h>

int main(){
    /*Operadores C*/

    /*Exemplo de um Operador*/
    int myNum = 100 + 50;/*Output 150*/
    int sum1 = 100 + 50; /*150 (100 + 50)*/
    int sum2 = sum1 + 250; /*400 (150 + 250)*/
    int sum3 = sum2 + sum2; /*800 (400 + 400)*/

    /*Aritméticos*/
    int x = 10;
    int y = 3;


    /*Operadores de Atribuição*/
    
    printf("\n-----Impressao Operadores de  Valores-----\n\n");
    printf("Valor da Soma: %d\n", x + y); // Output: 13
    printf("Valor da Subtracao: %d\n", x - y); // Output: 7
    printf("Valor da Multiplicacao: %d\n", x * y); // Output: 30
    printf("Valor da Divisao: %d\n", x / y); // Output: 3
    printf("Valor do Resto: %d\n\n", x % y); // Output: 1
    


        /*Extra*/
        int z = 5;
        z++; /*Incremento: z agora é 6*/
        int a = 10;
        int b = 3;

        double c = 10.0; /* Double division, result is a double */
        double d = 3.0; /* Double division, result is a double */

    
    /*Extra*/
    printf("-----Exemplo extra-----\n\n");
    printf("Valor de z: %d\n", z); // Output: 6
    z--; /*Decremento: z agora é 5 novamente*/
    printf("Valor de z apos incremento: %d\n\n", z); // Output: 6
    
    printf("-----Exemplo extra a / b e c / d -----\n\n");
    printf("Valor de a / b: %d\n", a / b); // Output: 3
    printf("Valor de c / d: %f\n\n", c / d); // Output: 3.333333

}