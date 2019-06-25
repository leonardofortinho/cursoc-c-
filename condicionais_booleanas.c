#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void main(){

    //Definindo as variáveis
    bool a = true, b = false;

    //Se A for verdadeiro
    if(a){
        printf("A eh verdadeiro.\n");
    }

    //Comprando o B
    if(b){
        printf("B eh verdadeiro.\n");
    }else{
        printf("B eh falso.\n");
    }

    //Comparando uma falsidade
    if(!b){
        printf("B eh falso.\n");
    }

    //Pausa
    system("pause");
}
