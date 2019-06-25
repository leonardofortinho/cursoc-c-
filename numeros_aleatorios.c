#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h> //Função para números aleatórios.

//Função principal do programa
void main(){
    setlocale(LC_ALL,"");

    //Responsável por alimentar o rand de forma diferente
    srand((unsigned)time(NULL));

    //Viarável que recebe o resto da divisão do número por 3 (aletório entre 0 e 2)
    int aleatorio = rand() % 3;

     //Imprime o valor
    printf("%d\n", aleatorio);

    //Viarável que recebe o resto da divisão do número por 5 (aletório entre 1 e 5)
    int aleatorioSegundo = (rand() % 5) + 1;

    //Imprime o valor
    printf("%d\n", aleatorioSegundo);

    //Pausa o programa após executar
    system("pause");
}
