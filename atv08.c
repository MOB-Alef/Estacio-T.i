#include<stdio.h>
#include<stdbool.h>

/*{gcc atv08.c -o atv08} <-Comado para Compilar e salva as ultima Alteração */
/*{ .\atv08 } Comando para executar o programa */

/*Usa if...Else*/
int main(){
/*Variaveis if */
int x = 20;
int y = 18;

/*Variaveis Else*/
int time = 16;

/*if bool*/
bool isGreater = x > y;

/*Uso de Variáveis booleanas*/
bool isMorning = time < 12;
bool isDay = time < 18;


    /*Condições e Instruções If em C */
   /*
   Operadores de Comparação */
    if (20 > 18);
    {
        printf("20 e maior que 18\n");
    }
   /*
   Operadores de Comparação 2º Opção*/
    if (isGreater);
    {
        printf("20 e maior que 18\n");
    }
/*if Else exemplo */
if (time < 12)
{
    printf("Bom Dia.");
} else if (time < 18) {
    printf("Boa Tarde.");
} else {
    printf("Boa Noite");
}
/*Uso de Variáveis booleanas*/
if(isMorning){
    printf("Bom Dia!");
} else if (isDay){
    printf("Boa Tarde.");
} else{
    printf("Boa Noite.");
}


}
/*hello hello hello hello hiiii!!!! :]*/