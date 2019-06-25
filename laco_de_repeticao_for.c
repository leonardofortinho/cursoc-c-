#include <stdio.h>
#include <stdlib.h>
#include <locale.h> // Permite acento nas vari�vels.

//Fun��o principal do programa
void main(){
    setlocale(LC_ALL,"");

    //Definindo Vari�veis
    int cont; //Normalmente no 'for' se usa a vari�vel 'i' (se 'for' estiver dentro de outro 'for'). Ou voc� pode usar o 'cont' de contador.

    //Contando at� 10.
    for(cont = 1; cont <= 10; cont++){
        printf("%d\n", cont);
    }

    //Tabuada (Ex.: de 5)
    for(cont = 1; cont <= 10; cont++){
        printf("5 X %d = %d\n", cont, 5 * cont);
    }

    //Contando de 2 em 2
    for(cont = 1; cont <= 10; cont = cont + 2){
        printf("%d\n", cont);
    }

    //Contagem Regressiva
    for(cont = 10; cont > 0; cont--){
        printf("%d\n", cont);
    }

    //Pausa o programa ap�s executar
    system("pause");
}
