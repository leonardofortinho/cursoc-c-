#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Permite acentos nas impressões
#define TAM 3

//Função principal do programa
void main(){
    setlocale(LC_ALL,"");

    //Definindo Vetor
    int vetor[TAM], cont;

    //Passando valores para o vetor
    vetor[0] = 5;
    vetor[1] = 10;
    vetor[2] = 15;

    //Adicionando 1 para cada posição
    for(cont = 0; cont < TAM; cont++){
        vetor[cont] = vetor[cont] + 1;
    }

    //Exibir os valores do vetor
    printf("Posição 0: %d\n", vetor[0]);
    printf("Posição 1: %d\n", vetor[1]);
    printf("Posição 2: %d\n", vetor[2]);

    //Imprimindo vetor em um laço de repetição (Exemplo 2)
    for(cont = 0; cont < TAM; cont++){
        printf("Posição %d: %d\n", cont, vetor[cont]);
    }

     //Lendo 3 valores para o vetor
    for(cont = 0; cont < TAM; cont++){
        scanf("%d", &vetor[cont]);
    }

     for(cont = 0; cont < TAM; cont++){
        printf("Posição %d: %d\n", cont, vetor[cont]);
     }

    //Pausa o programa após executar
    system("pause");
}
