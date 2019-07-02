#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
#include <string>

void limpaTela();

int main(){
    setlocale(LC_ALL,"");

    //Definindo Variáveis
    int a;

    //Imprimindo alguma coisa
    printf("Digite um valor para 'a': ");

    //Lendo o valor
    scanf("%d", &a);

    //Limpa a tela, chamando a função.
    limpaTela();

    printf("O valor digitado foi %d", a);

    return 0;
}

void limpaTela(){
    system("CLS"); //A função 'system' é padrão do 'stdlib'. O 'CLS' é clear.
}
