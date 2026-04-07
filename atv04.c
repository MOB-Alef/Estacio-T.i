/*Bibliotecas*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <sys/stat.h>

/*Inicio do Programa*/
int main(){
    setlocale(LC_ALL, "");/*Da suporte a caracteres especiais*/

    /*conversao de tipos*/
    int x = 5;/*Output 5*/
    int y = 2;/*Output 2*/
    //int sum = 5 / 2;/* Output 2*/

    /*Conversao Implicita*/
    float myFloat = 9;/*Output 9.000000*/
    int myInt = 9.99;/* Output 9*/
    float sum = 5 / 2;/*Output 2.000000*/

    /*Conversao Explicita*/
    float sum2 = (float) 5 / 2 ;

    /*Impressao de Valores*/
    printf("Impressao da Divisao Inteira: %d\n", sum);/*Divisão Inteira  2 */
    printf("Impressao da Divisao com Conversao Implicita: %f\n", myFloat);/*Conversão Implicita 9.000000*/
    printf("Impressao da Conversao Implicita para Inteiro: %d\n", myInt);/*Conversão Implicita para Inteiro 9 */
    printf("Impressao da Divisao com Conversao Implicita: %f\n", sum);/*Divisão com Conversão Implicita 2.000000*/

    /*Fim do Programa*/
    return 0;
}