#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Permite acentos nas impress�es
#include <iostream>
#include <string>

using namespace std;

//Fun��o principal do programa
int main(){
    setlocale(LC_ALL,"");

    //Vari�veis
    int a = 20;

    //Imprimir o valor de uma vari�vel 'a'
    printf("Valor de a: %d\n", a);

    //Imprimir o endere�o de uma vari�vel na mem�ria
    printf("Endere�o de a: %d\n", &a);
    //O Ponteiro armazena o endere�o de mem�ria da vari�vel 'a', no caso a sua posi��o.

    //Lendo o valor de uma vari�vel
    printf("\n");
    printf("Digite o novo valor de 'a': ");
    scanf("%d", &a); //O '&' � o operador que busca o endere�o de mem�ria

    printf("Valor de a: %d", a);

    printf("\n");

    //Viaraveis armazenam valores
    int b = 10;

    //Ponteiros armazenam posi��es na mem�ria
    int *ponteiro; //Dessa forma se cria um ponteiro (usando o '*')
    //Ponteiro recebendo a posi��o na mem�ria da vari�vel 'b'.
    ponteiro = &b;

    //Imprimir o valor de uma vari�vel 'b'
    printf("Valor de b: %d\n", b);

    //'*' pode ser lido como "Conteudo apotando por":
    *ponteiro = 40;

    //Imprimir o valor de uma vari�vel 'b'
    printf("Valor de b: %d\n", b);

    return 0;
}
