#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Permite acentos nas impressões

//Função principal do programa
void main(){
    setlocale(LC_ALL,"");

    //Variável
    char palavra[10];

    //Instrução
    printf("Digite uma palavra: ");

    //Limpar o Buffer. Buffer é o responsável pela leitura de mais de uma letra ou mais de um valor de uma vez só.
    setbuf(stdin, 0);  //'stdin' (Standard Input) é a entrada padrão.

    //Lê a String
    fgets(palavra, 255, stdin);  //Vai pegar a string (ou no caso a palavra). O 'stdin' vai definir a entrada dela (FILE)

    //Limpa as casas não utilizadas no vetor.
    palavra[strlen(palavra)-1] = '\0';

    //Imprimir a String
    printf("%s\n", palavra);

    //Pausa o programa após executar
    system("pause");
}
