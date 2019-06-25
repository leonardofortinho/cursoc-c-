#include <stdio.h>
#include <stdlib.h>
#include <locale.h> // Permite acento nas vari�vels.

//Fun��o principal do programa
void main(){
    setlocale(LC_ALL,"");

    //Definindo Vari�veis
    int a = 1;

    //Primeiro confere a condi��o e depois repete o bloco.
    while(a <= 10){
        //Imprimindo 'a' na tela.
        printf("%d\n", a);

        //Incremento
        //O 'a++' � como se fosse o a mesma opera��o (que est� comentada abaixo).
        a++;    //a = a + 1;
    }

    printf("\n");

    //Primeiro executa a primeira vez e depois confere a condi��o
    //Alterado o valor de 'a' para mostrar como executa.
    a = 20;

    do{
        //Imprimindo 'a' na tela.
        printf("%d\n", a);

        //Incremento
        //O 'a++' � como se fosse o a mesma opera��o (que est� comentada abaixo).
        a++;    //a = a + 1;

    }while(a <= 10);

    //Pausa o programa ap�s executar
    system("pause");
}
