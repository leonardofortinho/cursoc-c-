#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Permite acentos nas impressões

//Função principal do programa
void main(){
    setlocale(LC_ALL,"");

    //Definindo variáveis
    int a = 2;
    char b = 'x';

    //Exemplo do 'if'
    if(a == 1){
        printf("Opção escolhida: 1\n");
    }else if(a == 2){
        printf("Opção escolhida: 2\n");
    }else if(a == 3){
        printf("Opção escolhida: 3\n");
    }else{
        printf("Opção inválida\n");
    }

    //O Swith Case faz uma escolha em 'caso de um ou de outro', funciona melhor que o exemplo do 'if'.
    //Mas tem que usar o 'break' depois que a opção foi escolhida.
    switch(a){
        case 1:
            printf("Opção escolhida: 1\n");
            break;
        case 2:
            printf("Opção escolhida: 2\n");
            break;
        case 3:
            printf("Opção escolhida: 3\n");
            break;
        default:
            printf("Opção inválida\n");
            break;
    }

    //Switch com Char
    switch(b){
    case 'x':
        printf("A letra é X\n");
        break;
    default:
        printf("Opção inválida.\n");
        break;
    }


    //Pausa o programa após executar
    system("pause");
}
