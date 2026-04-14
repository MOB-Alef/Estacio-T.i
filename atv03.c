#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <sys/stat.h>


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

/*Exemplo estendido*/
int normalInt = 1000;
double normalDouble = 3.14;

short int small = -100;
unsigned int count =25;
long int big = 1234567890;
long long int verybig = 9223372036854775807;
unsigned long long int huge = 18446744073709551615U;
long double precise =  3.141592653589793238462643383279L;

/*Impressão Dos Valores*/

printf("\n**Impressao Dos Valores**\n\n");
printf("Caractere: %c \n", myGrande);
printf("Caracteres: %c %c %c\n\n", a, b, c);/*impressão dos valores resumida em linhas de codigo*/

/*Impressão Individual Dos Valores*/

printf("**Impressao Individual Dos Valores**\n\n");
printf("Caractere A: %c\n", a);
printf("Caractere B: %c\n", b);
printf("Caractere C: %c\n\n", c);

/*Impressão do Número Inteiro*/

printf("**Impressao Do Numero Inteiro**\n\n");
printf("Numero: %d \n", myNum);
printf("Numero Real: %f \n",myNum2);
printf("Numero Double: %f \n\n",myNum3);

/*Impressão dos Números Científicos*/

printf("**Impressao Dos Numeros Cientificos**\n\n");
printf("Numero Cientifico Float: %f \n", f1);
printf("Numero Cientifico Double: %f \n\n", d1);

/*Impressao da Precisao*/

printf("**Impressao Da Precisao**\n\n");
printf("Numero com precisao padrao: %f\n", myFloatNum); /*Default will show 6 digits after the decimal point*/
printf("Numero com 1 digito: %.1f\n", myFloatNum);/*only show 1 digit*/
printf("Numero com 2 digitos: %.2f\n", myFloatNum);/*only show 2 digits*/
printf("Numero com 3 digitos: %.3f\n\n", myFloatNum);/*only show 4 digits*/ 

/*Impressão da String*/

printf("**Impressao Da String**\n\n");
printf("String: %s \n\n" , myText);

/*Tamanho da memória*/
printf("**Tamanho Da Memoria**\n\n");
printf("Tamanho de myInt: %zu bytes\n", sizeof(myInt));/*4 bytes*/
printf("Tamanho de myFloat: %zu bytes\n", sizeof(myFloat));/*4 bytes*/
printf("Tamanho de myDouble: %zu bytes\n", sizeof(myDouble));/*8 bytes*/
printf("Tamanho de myChar: %zu bytes\n\n", sizeof(myChar));/*1 byte*/

/*Exemplo da Vida Real*/
printf("**Exemplo da Vida Real**\n\n");
printf("Numero de itens: %d\n", items);
printf("Custo por item: %.2f\n", cost_per_item, currency);
printf("Valor Total: %.2f %c\n\n", total_cost, currency);

/*Exemplo estendido*/
printf("**Exemplo Estendido**\n\n");
printf("Normal Int: %d\n", normalInt);
printf("Normal Double: %f\n", normalDouble);
printf("Small: %f\n", normalDouble);
printf("Count: %u\n", count);
printf("Big: %ld\n", big);
printf("VeryBig: %lld\n", verybig);
printf("Huge: %llu\n", huge);
printf("Precise: %.30lf\n\n", precise);

/*Verificação o Tamanho*/
printf("**Verificação do Tamanho**\n\n");
printf("Size of int: %zu bytes\n", sizeof(int));
printf("Size of double: %zu bytes\n", sizeof(double));
printf("Size of short int: %zu bytes\n", sizeof(short int));
printf("Size of unsigned int: %zu bytes\n", sizeof(unsigned int));
printf("Size of long int: %zu bytes\n", sizeof(long int));
printf("Size of long long int: %zu bytes\n", sizeof(long long int));
printf("Size of unsigned long long int: %zu bytes\n", sizeof(unsigned long long int));
printf("Size of long double: %zu bytes\n\n", sizeof(long double));

    /* fim do programa */
    return 0;
}