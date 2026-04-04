#include <stdio.h>

int main()
{
    /*declaração de variável*/
    int myNum = 15;
    float myfloatNum = 5.99;
    char myLetter = 'D';

    /*Sengunda variavel (subtituicao)*/
    int myOtherNum = 10;

    /*Substituição do valor da variável*/
    myNum = myOtherNum;
    
    /*impresao da Varialves*/
    printf("My favorite number: %d \n", myNum);
    printf("My favorite float number: %f \n", myfloatNum);
    printf("My favorite Letter: %c \n", myLetter);

    /* fim do programa */
    return 0;
}