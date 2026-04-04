#include <stdio.h>

int main()
{
    /*declaração de variável*/
    int myNum = 15;
    float myfloatNum = 5.99;
    char myLetter = 'D';

    /*Somar de variaveis*/
    int x = 5;
    int y = 6;
    x = x + 1;
    int sum = x + y;

    /*Declaraar Múltiplas Variáveis*/
    int x = 5 , y = 6, z = 50;

    /*Sengunda variavel (subtituicao)*/
    int myOtherNum = 10;

    /*Substituição do valor da variável*/
    myNum = myOtherNum;
    
    /*impresao da Varialves*/
    printf("My favorite number: %d \n", myNum);
    printf("My favorite float number: %f \n", myfloatNum);
    printf("My favorite Letter: %c \n", myLetter);
    printf("Digite um numero: %d \n", x);

    /*Impressão das variáveis Somar e Multiplica Numéricas*/
    printf("Soma: %d \n", sum);
    printf("Multiplica: %d \n", x + y + z);

    /* fim do programa */
    return 0;
}