#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
#include <string>

using namespace std;

void mostraSucessor(int numero);
int retornaAntecessor(int numero);

int main(){
    setlocale(LC_ALL,"");

    //Definindo variáveis
    int a;

    //Imprimindo
    printf("Digite um valor: ");

    //Lendo o valor de 'a'
    scanf("%d", &a);

    //Chama a função
    mostraSucessor(a); //Tem que colocar entre parenteses o parametro instruido.

    //Exibe o antecessor
    printf("O antecessor de % d é %d", a, retornaAntecessor(a));

    return 0;
}

void mostraSucessor(int numero){
    printf("O sucessor de de % d é %d\n", numero, numero + 1);
}

int retornaAntecessor(int numero){
    return numero -1;
}
