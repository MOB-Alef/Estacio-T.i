#include <stdio.h>

int main()
{
/*Tipos de Dados em C*/
char myGrande = 'A';/*Caractere*/
char a = 65, b = 66, c=67;
char myText[] = "Hello World";

/*Tipo de dados Numéricos*/
int myNum = 100;
float myNum2 = 5.75;
double myNum3 = 19.99;

/*Numero Científico*/
float f1 = 35e3; /* 25 * 10^3 = 35000 */
double d1 = 12E4; /* 12 * 10^4 = 120000 */

/*impressão dos valores*/
printf("\n**impressao dos valores**\n\n");
printf("Caractere: %c \n", myGrande);
printf("Caracteres: %c %c %c\n\n", a, b, c);/*impressão dos valores resumida em linhas de codigo*/

/*impressão individual dos valores*/
printf("**impressao individual dos valores**\n\n");
printf("Caractere A: %c\n", a);
printf("Caractere B: %c\n", b);
printf("Caractere C: %c\n\n", c);

/*impressão do número inteiro*/
printf("**impressao do numero inteiro**\n\n");
printf("Numero: %d \n", myNum);
printf("Numero Real: %f \n",myNum2);
printf("Numero Double: %f \n\n",myNum3);

/*impressão dos números científicos*/
printf("**impressao dos numeros cientificos**\n\n");
printf("Numero Cientifico Float: %f \n", f1);
printf("Numero Cientifico Double: %f \n\n", d1);

/*impressão da string*/
printf("**impressao da string**\n\n");
printf("String: %s \n\n" , myText);

    /* fim do programa */
    return 0;
}