#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

bool retornaBooleano();

int main(){
    setlocale(LC_ALL,"");

    //Definindo Vari�veis
    bool variavelBooleana;

    //Vari�vel Recebendo Booleano
    variavelBooleana = retornaBooleano();

    //Se for verdadeiro executa o primeiro bloco
    if(variavelBooleana){
        printf("%d � true", variavelBooleana);
    }else{
        printf("%d � false", variavelBooleana);
    }

    return 0;
}

bool retornaBooleano(){
    return true;
}


