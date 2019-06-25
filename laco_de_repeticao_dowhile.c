#include <stdio.h>
#include <stdlib.h>
#include <locale.h> // Permite acento nas variávels.

//Função principal do programa
void main(){
    setlocale(LC_ALL,"");

    //Definindo Variáveis
    int a = 1;

    //Primeiro confere a condição e depois repete o bloco.
    while(a <= 10){
        //Imprimindo 'a' na tela.
        printf("%d\n", a);

        //Incremento
        //O 'a++' é como se fosse o a mesma operação (que está comentada abaixo).
        a++;    //a = a + 1;
    }

    printf("\n");

    //Primeiro executa a primeira vez e depois confere a condição
    //Alterado o valor de 'a' para mostrar como executa.
    a = 20;

    do{
        //Imprimindo 'a' na tela.
        printf("%d\n", a);

        //Incremento
        //O 'a++' é como se fosse o a mesma operação (que está comentada abaixo).
        a++;    //a = a + 1;

    }while(a <= 10);

    //Pausa o programa após executar
    system("pause");
}
