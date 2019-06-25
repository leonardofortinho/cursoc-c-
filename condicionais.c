#include <stdio.h>
#include <stdlib.h>

void main(){

    //Definindo variáveis
    int a = 4, opcao = 3;
    float b = 2.5;
    char c = 'x';

    //Condicional simples
    if(a == 5){
        printf("A variavel a = 5\n");
    }

    if(c == 'x'){
        printf("A variavel c = x\n");
    }

    if(b == 2.5){
        printf("A variavel b = 2.5\n");
    }

    //Numero par ou impar
    if(a % 2 == 1){
        printf("A variavel a eh impar\n");
    }else{
        printf("A variavel a eh par\n");
    }

    //Condicional composta. Obs.: Vai fazer tudo em um bloco só de memória.
    if(opcao == 1){
        printf("A opcao = 1\n");
    }else if(opcao == 2){
        printf("A opcao = 2\n");
    }else{
        printf("A opcao nao eh igual a 1 e nem 2\n");
    }

    system("pause");
}
