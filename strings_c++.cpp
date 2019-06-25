#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Permite acentos nas impressões
#include <string>  //Biblioteca string
#include <iostream>  //Biblioteca que pode substituir o 'stdio.h', tem a mesma função, entrada e saída de dados

using namespace std; //Dessa forma ele aplica o std em todas as partes do código da string

//Função principal do programa. No C++ não pode usar o void, tem que trocar pelo int
int main(){
    setlocale(LC_ALL,"");

    //Definindo uma String
    //std::string palavra; *Forma sem o std
    string palavra;

    //Imprimindo na Tela
    //printf("Digite uma palavra: "); *Forma sem o std
    cout << "Digite uma palavra: ";

    //std::cin >> palavra; *Forma sem o std
    cin >> palavra;

    //std::cout << palavra; *Forma sem o std
    cout << "A palavra é: " << palavra;

    printf("\n");

    //Pausa o programa após executar
    system("pause");

    return 0;  //Fazer o return 0 porque se usar a função principal int.
}
