#include <stdio.h>
#include <stdlib.h>
#include <locale.h> // Permite acento nas vari�vels.

//Fun��o principal do programa
void main(){
    setlocale(LC_ALL,"");

    //Definindo Vari�veis
    int opcao;

    //Confere e v�lida a op��o
    while(opcao < 1 || opcao > 3){

        //Interface de menu
    printf("Escolha uma op��o: \n");
    printf("1 - Op��o 1\n");
    printf("2 - Op��o 2\n");
    printf("3 - Op��o 3\n");

    //Lendo a op��o
    scanf("%d", &opcao);

    //Resultado de acordo com a op��o escolhida
    switch(opcao){
        case 1:
            printf("Op��o 1 foi escolhida\n");
            break;
        case 2:
            printf("Op��o 2 foi escolhida\n");
            break;
        case 3:
            printf("Op��o 3 foi escolhida\n");
            break;
        default:
            printf("Op��o Inv�lida\n");
            break;
    }


    }


     //Pausa o programa ap�s executar
    system("pause");
}
