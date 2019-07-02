#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
#include <string>
#define TAM 3
using namespace std;

int main(){
    setlocale(LC_ALL,"");

    //Definindo Vetores
    int vetor[TAM] = {5,10,15}, cont, i, j; //Aqui você indica o tamanho do vetor. *Matrizes é definido por conveção por 'i' e 'j'.

      //Imprimindo Valores no Vetor
    for(cont = 0; cont < TAM; cont++){
        printf("%d", vetor[cont]);
        printf("\n");
        cout << vetor[cont] << "\n"; //Imprimindo em C++
    }

    //Passando valores para o Vetor
    vetor [0] = 10;
    vetor [1] = 20;
    vetor [2] = 30;

    printf("%d\n", vetor[0]); //Aqui se imprimi o vetor de forma isolado.

    //Reiniciar o contador
    cont = 0;

    //Imprimindo Valores do Vetor (While)
    while(cont < TAM){
        printf("%d\n", vetor[cont]);
        cont++;
    }

    //Definir Matrizes
    int matriz[TAM][TAM] = {1,2,3,4,5,6,7,8,9};

    //Imprimindo os Vetorez da Matriz
    for(i = 0; i < TAM; i++){
        for(j = 0; j < TAM; j++){
            cout << matriz[i][j] << " ";
        }
        cout << "\n";
    }


    return 0;
}
