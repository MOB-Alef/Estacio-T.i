#include <stdio.h>

int main()
{
/*Tipos de Dados em C*/
char myGrande = 'A';/*Caractere*/
char a = 65, b = 66, c=67;
char myText[] = "Hello World";

/*Tipo de dados Numéricos*/
int myNum = 100;

/*impressão dos valores*/
printf("Caractere: %c \n", myGrande);
printf("Caracteres: %c %c %c\n", a, b, c);/*impressão dos valores resumida em linhas de codigo*/

/*impressão individual dos valores*/
printf("Caractere A: %c\n", a);
printf("Caractere B: %c\n", b);
printf("Caractere C: %c\n", c);

/*impressão do número inteiro*/
printf("Numero: %d \n", myNum);

/*impressão da string*/
printf("String: %s \n" , myText);

    /* fim do programa */
    return 0;
}