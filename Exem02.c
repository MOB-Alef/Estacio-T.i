# include <stdio.h>
#include <locale.h>
/*Aluno:ALef Viana barroso
Matricula:202601516761
*/
int main(
)
{
    /*declaração de variável*/
    setlocale(LC_ALL, "portuguese");
    int num;

    printf("Digite uma opcao de 1 a 7: ");
    scanf("%d", &num);
    switch (num)
    {
    case 1: printf("| Domigo |");
        break;
    case 2: printf("| Segunda-feira |");
        break;
    case 3: printf("|Terca-feira |");
        break;
    case 4: printf("| Quarta-feira |");
        break;
    case 5: printf("| Quinta-feira |");
        break;
    case 6: printf("| Sexta-feira |");
        break;
    case 7: printf("| Sabado |");
        break;
    
    default: printf("Erro! Opcao Invalida!");
        break;
    }
return 0;

    }