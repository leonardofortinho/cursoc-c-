#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h> //Fun��o para n�meros aleat�rios.

//Fun��o principal do programa
void main(){
    setlocale(LC_ALL,"");

    //Respons�vel por alimentar o rand de forma diferente
    srand((unsigned)time(NULL));

    //Viar�vel que recebe o resto da divis�o do n�mero por 3 (alet�rio entre 0 e 2)
    int aleatorio = rand() % 3;

     //Imprime o valor
    printf("%d\n", aleatorio);

    //Viar�vel que recebe o resto da divis�o do n�mero por 5 (alet�rio entre 1 e 5)
    int aleatorioSegundo = (rand() % 5) + 1;

    //Imprime o valor
    printf("%d\n", aleatorioSegundo);

    //Pausa o programa ap�s executar
    system("pause");
}
