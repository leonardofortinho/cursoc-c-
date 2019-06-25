#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Permite acentos nas impress�es

//Fun��o principal do programa
void main(){
    setlocale(LC_ALL,"");

    //Vari�vel
    char palavra[10];

    //Instru��o
    printf("Digite uma palavra: ");

    //Limpar o Buffer. Buffer � o respons�vel pela leitura de mais de uma letra ou mais de um valor de uma vez s�.
    setbuf(stdin, 0);  //'stdin' (Standard Input) � a entrada padr�o.

    //L� a String
    fgets(palavra, 255, stdin);  //Vai pegar a string (ou no caso a palavra). O 'stdin' vai definir a entrada dela (FILE)

    //Limpa as casas n�o utilizadas no vetor.
    palavra[strlen(palavra)-1] = '\0';

    //Imprimir a String
    printf("%s\n", palavra);

    //Pausa o programa ap�s executar
    system("pause");
}
