#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Permite acentos nas impress�es
#define TAM 3

//Fun��o principal do programa
void main(){
    setlocale(LC_ALL,"");

    //Definindo Vetor
    int vetor[TAM], cont;

    //Passando valores para o vetor
    vetor[0] = 5;
    vetor[1] = 10;
    vetor[2] = 15;

    //Adicionando 1 para cada posi��o
    for(cont = 0; cont < TAM; cont++){
        vetor[cont] = vetor[cont] + 1;
    }

    //Exibir os valores do vetor
    printf("Posi��o 0: %d\n", vetor[0]);
    printf("Posi��o 1: %d\n", vetor[1]);
    printf("Posi��o 2: %d\n", vetor[2]);

    //Imprimindo vetor em um la�o de repeti��o (Exemplo 2)
    for(cont = 0; cont < TAM; cont++){
        printf("Posi��o %d: %d\n", cont, vetor[cont]);
    }

     //Lendo 3 valores para o vetor
    for(cont = 0; cont < TAM; cont++){
        scanf("%d", &vetor[cont]);
    }

     for(cont = 0; cont < TAM; cont++){
        printf("Posi��o %d: %d\n", cont, vetor[cont]);
     }

    //Pausa o programa ap�s executar
    system("pause");
}
