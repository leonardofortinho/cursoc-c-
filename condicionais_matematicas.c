#include <stdio.h>
#include <stdlib.h>

void main(){

    //Definindo variáveis
    int a = 5, b = 10, c = 15;

    //Maior
    if(a > 2){
        printf("%d eh maior que 2\n", a);
    }

    //Maior ou igual
    if(c >= b){
        printf("%d eh maior ou igual a %d\n", c, b);
    }

    //Menor
    if(a < 10){
        printf("%d eh menor que 10\n", a);
    }

    //Menor e igual
    if(a <= 10){
        printf("%d eh menor e igual a 10\n", a);
    }

    //Diferente
    if(c != 10){
        printf("%d nao eh 10\n");
    }

    system("pause");
}
