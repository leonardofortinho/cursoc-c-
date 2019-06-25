#include <stdio.h>
#include <stdlib.h>

void main(){

    //Definindo váriaveis
    char letra = 'x';

    //Condicional Simples
    if(letra == 'x'){
        printf("A letra eh X.\n");
    }

    //Desta forma você imprime o código da letra, baseado na tabela ASCII
    printf("Codigo da letra = %d\n", letra);

    if(letra == 120){
            printf("A letra eh X.\n");
    }

    //Pausa do programa
    system("pause");
}
