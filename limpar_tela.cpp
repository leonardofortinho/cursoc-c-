#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
#include <string>

void limpaTela();

int main(){
    setlocale(LC_ALL,"");

    //Definindo Vari�veis
    int a;

    //Imprimindo alguma coisa
    printf("Digite um valor para 'a': ");

    //Lendo o valor
    scanf("%d", &a);

    //Limpa a tela, chamando a fun��o.
    limpaTela();

    printf("O valor digitado foi %d", a);

    return 0;
}

void limpaTela(){
    system("CLS"); //A fun��o 'system' � padr�o do 'stdlib'. O 'CLS' � clear.
}
