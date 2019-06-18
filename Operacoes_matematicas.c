#include <stdio.h>
#include <stdlib.h>

//Função principal do programa
void main(){
    //Definindo variáveis
    int a = 6, b = 4;

    //Soma
    printf("A soma de %d e %d = %d\n", a, b, a + b);

    //Subtração
    printf("A subtracao de %d e %d = %d\n", a, b, a - b);

    //Divisão
    printf("A divisao de %d e %d = %d\n", a, b, a / b);

    //Multiplicação
    printf("A multiplicacao de %d e %d = %d\n", a, b, a * b);

    //Resto da divisão
    printf("O resto da divisao entre %d e %d = %d\n", a, b, a % b);

    //Valor absoluto
    printf("O valor absoluto de  -3 = %d\n", abs(-3)); //O abs é o valor absoluto

    //Parar
    system("pause");
}
