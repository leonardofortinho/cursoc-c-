#include <stdio.h>
#include <stdlib.h>

//Fun��o principal do programa
void main(){
    //Definindo vari�veis
    int a = 6, b = 4;

    //Soma
    printf("A soma de %d e %d = %d\n", a, b, a + b);

    //Subtra��o
    printf("A subtracao de %d e %d = %d\n", a, b, a - b);

    //Divis�o
    printf("A divisao de %d e %d = %d\n", a, b, a / b);

    //Multiplica��o
    printf("A multiplicacao de %d e %d = %d\n", a, b, a * b);

    //Resto da divis�o
    printf("O resto da divisao entre %d e %d = %d\n", a, b, a % b);

    //Valor absoluto
    printf("O valor absoluto de  -3 = %d\n", abs(-3)); //O abs � o valor absoluto

    //Parar
    system("pause");
}
