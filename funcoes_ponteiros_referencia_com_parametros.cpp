#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
#include <string>

using namespace std;

int retornandoMaisDez(int numero);
void aumentaDez(int *numero);

int main(){
    setlocale(LC_ALL,"");

    //Definindo Vari�veis
    int a = 5;

    //Mostrando o valor
    printf("%d\n", a);

    //Aumentando 10
    a = retornandoMaisDez(a);

    //Mostrando o valor
    printf("%d\n", a);

    //Fun��o que aumentda

    return 0;
}

int retornandoMaisDez(int numero){
    return numero + 10;
}

void aumentaDez(int *numero){

}
