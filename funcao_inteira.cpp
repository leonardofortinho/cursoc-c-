#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Permite acentos nas impress�es

/*OBS.: Por padr�o, a fun��o principal (main) tem que estar no topo.
Ent�o se coloca a fun��o que � usada na principal em baixo dela.
Mas tem que colocar no topo uma indica��o da fun��o utilizada, que no caso � o 'int retornaDez().
*/

//Definindo que a fun��o existe.
int retornaDez();
float retornaQuebrado();

//Fun��o principal do programa
int main(){
    setlocale(LC_ALL,"");

    //Definindo Vari�veis
    int a;

    //Passando o retorno de uma fun��o para a vari�vel
    a = retornaDez();

    //Imprimindo o valor de a
    printf("%d\n", a);

    //Definindo um float
    float b;

    //Passando o retorno de uma fun��o para a vari�vel
    b = retornaQuebrado();

    //Imprimindo o valor de b
    printf("%.1f\n", b);

    return 0;
}

//Fun��o que retorna 10
int retornaDez(){
    printf("Ol�\n");
    int numero = 100;
    return numero + 4;
}

//Retorna um n�mero quebrado
float retornaQuebrado(){
    return 5.5;
}

// Lembrar que se pode colocar qualquer coisa dentro das fun��es, e fazer opera��es dentro delas.
