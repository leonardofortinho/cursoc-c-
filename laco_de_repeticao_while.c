#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Fun��o principal do programa
void main(){
    setlocale(LC_ALL,"");

    //Definindo Vari�veis
    int a = 1, b = 10;

    //Contando at� 10
    while(a <= 10){
        //Imprimindo 'a' na tela.
        printf("%d\n", a);

        //Incremento
        //O 'a++' � como se fosse o a mesma opera��o (que est� comentada abaixo).
        a++;    //a = a + 1;
    }

    //Contagem Regressiva.
    while(b >= 1){
        //Imprimindo 'a' na tela.
        printf("%d\n", b);

        //Incremento
        //O 'b--' � como se fosse o a mesma opera��o (que est� comentada abaixo).
        b--;    //b = b - 1;
    }

    //Pausa o programa ap�s executar
    system("pause");
}
