#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Fun��o principal do programa
void main(){
    setlocale(LC_ALL,"");
    //Definindo Vari�veis
    int a = 10;

    //Conectivo L�gico E (AND), mas em C/C++ equivale como '&&'. Se UMA COMPARA��O for FALSA N�O ENTRA NO BLOCO.
    if(a > 5 && a < 15){
        printf("A vari�vel 'a' est� entre 5 e 15\n");
    }

    //Conectivo L�gico OU (OR), mas em C/C++ equivale como '||'. Se UMA COMPARA��O for VERDADEIRA, J� ENTRA NO BLOCO.
    if(a > 5 || a > 15){
        printf("A vari�vel 'a' est� entre 5 e 15\n");
    }

    //Misturando Conectivos.
    if( (a > 5 && a < 15) || a == 20 ){
        printf("A vari�vel 'a' est� entre 5 e 15 ou ela vale 20\n");
    }

    //Pausa o programa ap�s executar
    system("pause");
}
