#include <stdio.h>
#include <stdlib.h>
#include <locale.h> // Permite acento nas variávels.

//Função principal do programa
void main(){
    setlocale(LC_ALL,"");

    //Definindo Variáveis
    int cont; //Normalmente no 'for' se usa a variável 'i' (se 'for' estiver dentro de outro 'for'). Ou você pode usar o 'cont' de contador.

    //Contando até 10.
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

    //Pausa o programa após executar
    system("pause");
}
