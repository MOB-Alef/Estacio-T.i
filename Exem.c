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
    if (num % 2 == 0 )
    {
        printf("%d e par", num);
    } else {
        printf("%d e impar", num);
    }
    return 0;

}