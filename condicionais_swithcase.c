#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Permite acentos nas impress�es

//Fun��o principal do programa
void main(){
    setlocale(LC_ALL,"");

    //Definindo vari�veis
    int a = 2;
    char b = 'x';

    //Exemplo do 'if'
    if(a == 1){
        printf("Op��o escolhida: 1\n");
    }else if(a == 2){
        printf("Op��o escolhida: 2\n");
    }else if(a == 3){
        printf("Op��o escolhida: 3\n");
    }else{
        printf("Op��o inv�lida\n");
    }

    //O Swith Case faz uma escolha em 'caso de um ou de outro', funciona melhor que o exemplo do 'if'.
    //Mas tem que usar o 'break' depois que a op��o foi escolhida.
    switch(a){
        case 1:
            printf("Op��o escolhida: 1\n");
            break;
        case 2:
            printf("Op��o escolhida: 2\n");
            break;
        case 3:
            printf("Op��o escolhida: 3\n");
            break;
        default:
            printf("Op��o inv�lida\n");
            break;
    }

    //Switch com Char
    switch(b){
    case 'x':
        printf("A letra � X\n");
        break;
    default:
        printf("Op��o inv�lida.\n");
        break;
    }


    //Pausa o programa ap�s executar
    system("pause");
}
