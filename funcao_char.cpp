#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

char retornaLetra();

int main(){
    setlocale(LC_ALL,"");

    //Definindo Vari�veis
    char letra;

    //Char recebendo o valor de uma fun��o
    letra = retornaLetra();

    //Imprimindo um novo valor
    printf("%c", letra);

    return 0;
}

char retornaLetra(){
    return 120;  //O n�mero em char se refere ao que est� na tabela ASCII
    return 'X';
}
