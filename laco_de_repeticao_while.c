#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Função principal do programa
void main(){
    setlocale(LC_ALL,"");

    //Definindo Variáveis
    int a = 1, b = 10;

    //Contando até 10
    while(a <= 10){
        //Imprimindo 'a' na tela.
        printf("%d\n", a);

        //Incremento
        //O 'a++' é como se fosse o a mesma operação (que está comentada abaixo).
        a++;    //a = a + 1;
    }

    //Contagem Regressiva.
    while(b >= 1){
        //Imprimindo 'a' na tela.
        printf("%d\n", b);

        //Incremento
        //O 'b--' é como se fosse o a mesma operação (que está comentada abaixo).
        b--;    //b = b - 1;
    }

    //Pausa o programa após executar
    system("pause");
}
