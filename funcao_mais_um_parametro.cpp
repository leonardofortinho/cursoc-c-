#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
#include <string>

using namespace std;

void mostraSoma(int primeiroValor, int segundoValor);
int retornaSoma(int primeiroValor, int segundoValor);

int main(){
    setlocale(LC_ALL,"");

    //Definindo vari�veis
    int a = 5, b = 7;

    //Fun��o que mostra a soma
    mostraSoma(a,b); //Pode colocar o parametro da variavel
    mostraSoma(a,90); //Pode tamb�m colocar um valor que esteja dentro da fun��o, um valor inteiro(int)

    //Exibe o resultado da soma retornado pela fun��o
    printf("A soma entre %d e %d, � %d\n", a, b, retornaSoma(a, b));

    return 0;
}

void mostraSoma(int primeiroValor, int segundoValor){
    printf("A soma entre %d e %d, � %d\n", primeiroValor, segundoValor, primeiroValor + segundoValor);
}

int retornaSoma(int primeiroValor, int segundoValor){
    return primeiroValor + segundoValor;
}
