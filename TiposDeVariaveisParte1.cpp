#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Permite acentos nas impressões
#include <stdbool.h>
#include <iostream>
#include <string>

using namespace std;

int main(){

    //Definindo Variáveis
    int a;
    float b; //Pode usar o double
    char c;
    bool d;

    //Passando Valores
    a = 10;
    b = 2.8;
    c = 'w';
    d = true;

    //Escrevendo Variáveis na Tela com C
    printf("Valor do int: %d\n", a);
    printf("Valor do float: %.1f\n", b); //Se usar o '.(numero)f' o número vai indicar quantas casas depois da vírgula vai aparecer no float.
    printf("Valor do char (string): %c\n", c);
    printf("Valor do booleano: %d\n", d); //Vai dar 1, porque 1 é true e 0 é false

    //Imprimindo Valores com C++
    //std::cout << "oi";    -> Para imprimir na tela tem que se escrever 'std::', que chama as funções do C++.
    //                         Mas para não fazer isso toda hora, colocar no ínicio dos include o item 'using namespace std;'
    cout << "Valor: " << a; //Dessa forma com o 'using namespace std;' você pode fazer as impressões sem colocar o 'std::' o tempo inteiro.
                            //Assim não precisa colocar o "%d", por exemplo para adicionar variáveis a serem impressas na tela.

    //Lendo Valores com C
    //scanf("%d\n", &a);
    //scanf("%f\n", &b);
    //scanf("%c\n", &c);
    //scanf("%d\n", &d);

    //Lendo Valores com C++
    cin >> a;
    cout << "Valor: " << a;

    return 0;
}
