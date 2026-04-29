# include <stdio.h>
#include <locale.h>
/*{gcc Exem.c -o Exem} <-Comado para Compilar e salva as ultima Alteração */
/*{ .\Exem } Comando para executar o programa */
int main(
)
{
    /*declaração de variável*/
    setlocale(LC_ALL, "portuguese");
    int num;

    printf("Digite um numero: ");
    scanf("%d,",&num);
    
    if (num > 0 )
    {
        printf("\n----Empresao do Positivo----\n");
        printf("%d E postivo\n\n", num);
    } else if (num < 0 ){
        printf("\n----Empresao do Negativo----\n");
        printf("%d E negativo\n\n", num);
    }else {
        printf("\n----Empresao do Nulo----\n");
        printf("%d E nulo\n\n");
    }
    return 0;

}