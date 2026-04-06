#include <stdio.h>
#include <locale.h>

int main()
{
/*Tipos de Dados em C*/
setlocale(LC_ALL, "");

/*Tamanho da memória*/
int myInt;/*4 bytes*/
float myFloat;/*4 bytes*/
double myDouble;/*8 bytes*/
char myChar;/*1 byte*/

char myGrande = 'A';/*Caractere*/
char a = 65, b = 66, c=67;
char myText[] = "Hello World";

/*Precisão do Decimal */

float myFloatNum = 3.5 ;


/*Tipo de dados Numéricos*/

int myNum = 100;
float myNum2 = 5.75;
double myNum3 = 19.99;

/*Numero Científico*/

float f1 = 35e3; /* 25 * 10^3 = 35000 */
double d1 = 12E4; /* 12 * 10^4 = 120000 */

/*Exemplo da Vida Real*/
int items = 50;
float cost_per_item = 9.99;
float total_cost = items * cost_per_item;
char currency = '$';

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

/*Impressao da Presisao*/

printf("**impressao da precisao**\n\n");
printf("Numero com precisao padrao: %f\n", myFloatNum); /*Default will show 6 digits after the decimal point*/
printf("Numero com 1 digito: %.1f\n", myFloatNum);/*only show 1 digit*/
printf("Numero com 2 digitos: %.2f\n", myFloatNum);/*only show 2 digits*/
printf("Numero com 3 digitos: %.3f\n\n", myFloatNum);/*only show 4 digits*/ 


/*impressão da string*/

printf("**impressao da string**\n\n");
printf("String: %s \n\n" , myText);

/*Tamanho da memória*/
printf("**tamanho da memoria**\n\n");
printf("tamanho de myInt: %zu bytes\n", sizeof(myInt));/*4 bytes*/
printf("tamanho de myFloat: %zu bytes\n", sizeof(myFloat));/*4 bytes*/
printf("tamanho de myDouble: %zu bytes\n", sizeof(myDouble));/*8 bytes*/
printf("tamanho de myChar: %zu bytes\n", sizeof(myChar));/*1 byte*/

/*Exemplo da Vida Real*/
printf("**exemplo da vida real**\n\n");
printf("Numero de itens: %d\n", items);
printf("custo por item: %.2f\n", cost_per_item, currency);
printf("Valor Total: %.2f %c\n\n", total_cost, currency);

    /* fim do programa */
    return 0;
}