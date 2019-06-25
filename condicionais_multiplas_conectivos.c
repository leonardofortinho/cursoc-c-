#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Função principal do programa
void main(){
    setlocale(LC_ALL,"");
    //Definindo Variáveis
    int a = 10;

    //Conectivo Lógico E (AND), mas em C/C++ equivale como '&&'. Se UMA COMPARAÇÃO for FALSA NÃO ENTRA NO BLOCO.
    if(a > 5 && a < 15){
        printf("A variável 'a' está entre 5 e 15\n");
    }

    //Conectivo Lógico OU (OR), mas em C/C++ equivale como '||'. Se UMA COMPARAÇÃO for VERDADEIRA, JÁ ENTRA NO BLOCO.
    if(a > 5 || a > 15){
        printf("A variável 'a' está entre 5 e 15\n");
    }

    //Misturando Conectivos.
    if( (a > 5 && a < 15) || a == 20 ){
        printf("A variável 'a' está entre 5 e 15 ou ela vale 20\n");
    }

    //Pausa o programa após executar
    system("pause");
}
