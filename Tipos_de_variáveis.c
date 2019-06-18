#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> //Biblioteca booleana

void main(){

    //Definindo variáveis
    int a;
    float b;
    char c;
    bool d;

    //Passando valores
    a = 5;
    b = 2.3;
    c = 'a';
    d = true; //true = 1, false = 0

    //Escrevendo na tela
    printf("\n O valor de a = %d", a);
    printf("\n O valor de b = %.2f", b); //Se colocar o ".2" ele sinaliza que vai ser duas casas depois da virgula
    printf("\n O valor de c = %c", c);
    printf("\n O valor de d = %d", d);

    //Lendo Valores
    scanf("%d", &a);
    scanf("%f", &b);
    scanf(" %c", &c); //Tem que dar um espaço em " %c" para ele ler o caracterer.
    scanf("%d", &d);

    //Escrevendo na tela
    printf("\n O valor de a = %d", a);
    printf("\n O valor de b = %.2f", b);
    printf("\n O valor de c = %c\n", c);
    printf("\n O valor de d = %d\n", d);

    //Pular linha
    printf("\n");

    //Pausando
    system("pause");
}
