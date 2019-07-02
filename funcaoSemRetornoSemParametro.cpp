#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Permite acentos nas impressões

void desenhaBorda(){ //Void é função vazia
    printf("|---------------------------|\n"); //Dessa forma pode-se chamar a função em vez de fazer o printf(), por exemplo várias vezes.
}

//Função principal do programa
int main(){
    setlocale(LC_ALL,"");

    desenhaBorda(); //Aqui é quando se chama a função.

    printf("hi\n");

    desenhaBorda();

    return 0;
}
