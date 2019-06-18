#include <stdio.h>
#include <stdlib.h>

void main(){
    //Definindo uma váriavel
    int a = 5, b;

    //Imprimindo a variável "a". O %d é para imprimir o inteiro.
    printf("%d\n", a);

    //Concatenando
    printf("O valor da var a eh: %d %d\n", a);

    //Mudando o valor de "a"
    a = 15;
    printf("O valor da var a eh: %d %d\n", a);

    //Lendo valores
    scanf("%d", &b);
    printf("O valor da var b eh: %d %d\n", b);

    //Pula linha
    printf("\n")    ;

    //Imprimindo na tela
    printf("Uhuu\n");

    system("pause");
}


//Entre as aspas duplas, para pular de linha tem que colocar \n, ele pode ser antes ou depois, mas tem que estar dentro das aspas.
//Outro detalhe é que quanto mais vezes \n se colocar, mais linhas vai ser puladas.
