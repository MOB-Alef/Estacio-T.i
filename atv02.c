#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    /*Nomes Das Variáveis C*/
    int minutesPerHour = 60;/*Variável com*/
    int m = 60;

    /*declaração de variável*/
    int myNum = 15;
    float myfloatNum = 5.99;
    char myLetter = 'D';

    /*Somar de variaveis*/
    int x = 5;
    int y = 6;
    int sum = x + y;

    /*Declaraar Múltiplas Variáveis*/
    int a = 10 , b = 12, c = 50;

    /*Sengunda variavel (subtituicao)*/
    int myOtherNum = 10;

    /*Substituição do valor da variável*/
    myNum = myOtherNum;
    
    /*impresao da Varialves*/
    printf("\n**impressao das variaveis**\n\n");
    printf("My favorite number: %d \n", myNum);
    printf("My favorite float number: %f \n", myfloatNum);
    printf("My favorite Letter: %c \n", myLetter);
    printf("Digite um numero: %d \n", x);

    /*Impressão das variáveis Somar e Multiplica Numéricas*/
    printf("\n**impressao da soma de variaveis**\n\n");
    printf("Soma: %d \n", sum);
    printf("Soma: %d \n\n", a + b + c);

    /* fim do programa */
    return 0;
}