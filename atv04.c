/*Bibliotecas*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <sys/stat.h>

/*{gcc atv04.c -o atv04} <-Comado para Compilar e salva as ultima Alteração */
/*{ .\atv04 } Comando para executar o programa */

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
    int num1 = 2;
    int num2 = 5;
    float sum3 = (float) (num1 + num2) / 2;
    
    /*Exemplo da Vida Real*/
    int maxScore= 500;
    int userScore= 423;
    float percentage = (float) userScore / maxScore * 100;

    /*Impressao de Valores*/
    printf("Impressao da Divisao Inteira: %d\n", sum);/*Divisão Inteira  2 */
    printf("Impressao da Divisao com Conversao Implicita: %f\n", myFloat);/*Conversão Implicita 9.000000*/
    printf("Impressao da Conversao Implicita para Inteiro: %d\n", myInt);/*Conversão Implicita para Inteiro 9 */
    printf("Impressao da Divisao com Conversao Implicita: %f\n", sum);/*Divisão com Conversão Implicita 2.000000*/

    /*Divisao com Conversao Explicita*/
    printf("Impressao da Divisao com Conversao Explicita: %f\n", sum2);/*Divisão com Conversão Explicita 2.500000*/
    printf("Impressao da Divisao com Conversao Explicita: %f\n", sum3);/*Divisão com Conversão Explicita 3.500000*/

    /*Exemplo da Vida Real*/
    printf("Usuario Pontuacao: %d\n", userScore);


    /*Fim do Programa*/
    return 0;
}