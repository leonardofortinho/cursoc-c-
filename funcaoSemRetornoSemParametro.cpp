#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Permite acentos nas impress�es

void desenhaBorda(){ //Void � fun��o vazia
    printf("|---------------------------|\n"); //Dessa forma pode-se chamar a fun��o em vez de fazer o printf(), por exemplo v�rias vezes.
}

//Fun��o principal do programa
int main(){
    setlocale(LC_ALL,"");

    desenhaBorda(); //Aqui � quando se chama a fun��o.

    printf("hi\n");

    desenhaBorda();

    return 0;
}
