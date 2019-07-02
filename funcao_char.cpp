#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

char retornaLetra();

int main(){
    setlocale(LC_ALL,"");

    //Definindo Variáveis
    char letra;

    //Char recebendo o valor de uma função
    letra = retornaLetra();

    //Imprimindo um novo valor
    printf("%c", letra);

    return 0;
}

char retornaLetra(){
    return 120;  //O número em char se refere ao que está na tabela ASCII
    return 'X';
}
