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


    /*Sengunda variavel (subtituicao)*/
    int myOtherNum = 10;

    /*Substituição do valor da variável*/
    myNum = myOtherNum;
    
    /*impresao da Varialves*/
    printf("My favorite number: %d \n", myNum);
    printf("My favorite float number: %f \n", myfloatNum);
    printf("My favorite Letter: %c \n", myLetter);
    printf("Soma: %d \n", sum);
    printf("Digite um numero: %d \n", x);

    /* fim do programa */
    return 0;
}