# include <stdio.h>
#include <locale.h>
/*{gcc atv01.c -o atv01} <-Comado para Compilar e salva as ultima Alteração */
/*{ .\atv01 } Comando para executar o programa */
int main(
)
{
    /*declaração de variável*/
    int myNum = 15;
    setlocale(LC_ALL, "");
    
    /* A impressão de de mensagem */
    printf("\n**impressao de mensagem**\n\n");
    printf("Hello, World!\n");
    printf("I am learning C!\n");
    printf("And it is awesome!\n");
    printf(":]\n");
    printf("myNum: %d\n", myNum);/*A impressão da variável*/

    /* fim de primeiro parte*/
    return 0;
}
    /*Teste de atividade 01 - hello world
    comit de primeiro projeto em liguagem C */
    /*
    git add .
git commit -m "mensagem"
git push
    */