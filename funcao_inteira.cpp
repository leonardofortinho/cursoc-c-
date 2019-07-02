#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Permite acentos nas impressões

/*OBS.: Por padrão, a função principal (main) tem que estar no topo.
Então se coloca a função que é usada na principal em baixo dela.
Mas tem que colocar no topo uma indicação da função utilizada, que no caso é o 'int retornaDez().
*/

//Definindo que a função existe.
int retornaDez();
float retornaQuebrado();

//Função principal do programa
int main(){
    setlocale(LC_ALL,"");

    //Definindo Variáveis
    int a;

    //Passando o retorno de uma função para a variável
    a = retornaDez();

    //Imprimindo o valor de a
    printf("%d\n", a);

    //Definindo um float
    float b;

    //Passando o retorno de uma função para a variável
    b = retornaQuebrado();

    //Imprimindo o valor de b
    printf("%.1f\n", b);

    return 0;
}

//Função que retorna 10
int retornaDez(){
    printf("Olá\n");
    int numero = 100;
    return numero + 4;
}

//Retorna um número quebrado
float retornaQuebrado(){
    return 5.5;
}

// Lembrar que se pode colocar qualquer coisa dentro das funções, e fazer operações dentro delas.
