#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

bool retornaBooleano();

int main(){
    setlocale(LC_ALL,"");

    //Definindo Variáveis
    bool variavelBooleana;

    //Variável Recebendo Booleano
    variavelBooleana = retornaBooleano();

    //Se for verdadeiro executa o primeiro bloco
    if(variavelBooleana){
        printf("%d é true", variavelBooleana);
    }else{
        printf("%d é false", variavelBooleana);
    }

    return 0;
}

bool retornaBooleano(){
    return true;
}


