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

    //Definindo variáveis
    int a = 5, b = 7;

    //Função que mostra a soma
    mostraSoma(a,b); //Pode colocar o parametro da variavel
    mostraSoma(a,90); //Pode também colocar um valor que esteja dentro da função, um valor inteiro(int)

    //Exibe o resultado da soma retornado pela função
    printf("A soma entre %d e %d, é %d\n", a, b, retornaSoma(a, b));

    return 0;
}

void mostraSoma(int primeiroValor, int segundoValor){
    printf("A soma entre %d e %d, é %d\n", primeiroValor, segundoValor, primeiroValor + segundoValor);
}

int retornaSoma(int primeiroValor, int segundoValor){
    return primeiroValor + segundoValor;
}
