#include<stdio.h>

int main(){
    /*Operadores C*/

    /*Exemplo de um Operador*/
    int myNum = 100 + 50;/*Output 150*/
    int sum1 = 100 + 50; /*150 (100 + 50)*/
    int sum2 = sum1 + 250; /*400 (150 + 250)*/
    int sum3 = sum2 + sum2; /*800 (400 + 400)*/

    /*Aritméticos*/
    int x = 10;
    int y = 3;

    /*Incremento e Decremento*/
    int paopleInRoom = 10;

    /* 3 pessoas na sala */
    /*paopleInRoom++
    paopleInRoom++
    paopleInRoom++*/
    paopleInRoom = paopleInRoom + 3; /*Output 13*/

    /* Operadores C : Comparação */

    int a = 5;
    int b = 10;


    /*Operadores de Designação C*/

    /*Operadores de Atribuição C*/
    int t = 10;
    t += 5;

    
    
    /*Exemplo da Vida Real Acompanhando Poupança */
    int savings = 100;
    savings += 50; /* add 50 to savings */ 
    
    /*Exemplo da Vida Real Comparaçãp */
    int age = 18;
    int passwordLength = 5;
    
        /*Operadores lógicos*/
    /*Exemplo da Vida Real: Verificação de login*/
    int isLoggedIn = 1;
    int isAdmin = 0;

    
    /*Operadores de Atribuição*/
    
    printf("\n-----Impressao Operadores de  Valores-----\n\n");
    printf("Valor da Soma: %d\n", x + y); // Output: 13
    printf("Valor da Subtracao: %d\n", x - y); // Output: 7
    printf("Valor da Multiplicacao: %d\n", x * y); // Output: 30
    printf("Valor da Divisao: %d\n", x / y); // Output: 3
    printf("Valor do Resto: %d\n\n", x % y); // Output: 1
    
    /*Exemplo de Comparação*/
    printf("\n-----Impressao de Comparacao-----\n\n");
    printf("Valor de a > b: %d\n", a > b);/* Output: 0 (false) */
    printf("Valor de a < b: %d\n", a < b);/* Output: 1 (true) */
    printf("Valor de a == b: %d\n", a == b);/* Output: 0 (false) */
    printf("Valor de a != b: %d\n", a != b);/* Output: 1 (true) */



    /*Exemplo da Vida Real*/
    printf("\n-----Exemplo da Vida Real-----\n\n");
    printf("Valor total de savings: %d\n\n", savings); // Output: 150


    /*Exemplo da Vida Real Comparação*/
    printf("-----Exemplo da Vida Real Comparacao-----\n\n");
    printf("Idade >= 18: %d\n", age >= 18); // Output: 1 (true)
    printf("Idade < 18: %d\n", age < 18); // Output: 0 (false)
    printf("Password Length >= 8: %d\n", passwordLength >=8); // Output: 0 (false)
    printf("Password Length < 8: %d\n\n", passwordLength < 8); // Output: 1 (true)

    /*Exemplo da Vida Real: Verificação de login*/
    printf("-----Exemplo da Vida Real: Verificacao de login-----\n\n");
    printf("isLoggedIn: %d\n", isLoggedIn); // Output: 1 (true)
    printf("isAdmin: %d\n\n", isAdmin); // Output: 0 (false)

    /*Extra*/
    int z = 5;
    z++; /*Incremento: z agora é 6*/
    int g = 10;
    int h = 3;
    
    double c = 10.0; /* Double division, result is a double */
    double d = 3.0; /* Double division, result is a double */
    
    /*Incremento e Decremento*/    
    /*int x = 10;*/
    ++x;
    --x;

    
    /*Extra*/
    printf("-----Exemplo extra-----\n\n");
    printf("Valor de z: %d\n", z); // Output: 6
    z--; /*Decremento: z agora é 5 novamente*/
    printf("Valor de z apos incremento: %d\n\n", z); // Output: 6
    
    printf("-----Exemplo extra g / h e c / d -----\n\n");
    printf("Valor de g / h: %d\n", g / h); // Output: 3
    printf("Valor de c / d: %f\n\n", c / d); // Output: 3.333333

    /*Incremento e Decremento*/
    printf("-----Exemplo Incremento e Decremento-----\n\n");
    printf("Valor de x: %d\n", x); // Output: 5
    printf("Valor de y: %d\n\n", y); // Output: 3

}

/*operator       exemple     Same As     
=              x = 5         x = 5
+=             x += 3        x = x + 3
-=             x -= 3        x = x - 3
*=             x *= 3        x = x * 3
/=             x /= 3        x = x / 3
%=             x %= 3        x = x % 3
&=             x &= 3        x = x & 3
|=             x |= 3        x = x | 3
^=             x ^= 3        x = x ^ 3
>>=            x >>= 3       x = x >> 3
<<=            x <<= 3       x = x << 3


*/

/*
Operator        name                         Exemple                       Description
==             Equal to                     (x == y)                     Returns true if x is equal to y
!=             Not equal                    (x != y)                    Returns true if x is not equal to y
>              Greater than                 (x > y)                     Returns true if x is greater than y
<              Less than                    (x < y)                     Returns true if x is less than y
>=             Greater than or equal to     (x >= y)        Returns true if x is greater than or equal to y
<=             Less than or equal to        (x <= y)           Returns true if x is less than or equal to y

*/

/*Operadores Logicos*/
/*
Operator        Name            Example                     Description
&&              Logical AND     (x < 5 && x < 10)           Returns true if both statements are true
||              Logical OR      (x < 5 || x < 4)            Returns true if one of the statements is true
!               Logical NOT     !(x < 5 && x < 10)          Reverse the result, returns false if the result is true and vice versa




*/