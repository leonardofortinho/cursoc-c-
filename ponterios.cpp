#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Permite acentos nas impressões
#include <iostream>
#include <string>

using namespace std;

//Função principal do programa
int main(){
    setlocale(LC_ALL,"");

    //Variáveis
    int a = 20;

    //Imprimir o valor de uma variável 'a'
    printf("Valor de a: %d\n", a);

    //Imprimir o endereço de uma variável na memória
    printf("Endereço de a: %d\n", &a);
    //O Ponteiro armazena o endereço de memória da variável 'a', no caso a sua posição.

    //Lendo o valor de uma variável
    printf("\n");
    printf("Digite o novo valor de 'a': ");
    scanf("%d", &a); //O '&' é o operador que busca o endereço de memória

    printf("Valor de a: %d", a);

    printf("\n");

    //Viaraveis armazenam valores
    int b = 10;

    //Ponteiros armazenam posições na memória
    int *ponteiro; //Dessa forma se cria um ponteiro (usando o '*')
    //Ponteiro recebendo a posição na memória da variável 'b'.
    ponteiro = &b;

    //Imprimir o valor de uma variável 'b'
    printf("Valor de b: %d\n", b);

    //'*' pode ser lido como "Conteudo apotando por":
    *ponteiro = 40;

    //Imprimir o valor de uma variável 'b'
    printf("Valor de b: %d\n", b);

    return 0;
}
