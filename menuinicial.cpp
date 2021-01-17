#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

void limpaTela(){
    system("clear");
}

void menuinicial(){
    int opcao = 0;

    while (opcao < 1 || opcao > 3){
        limpaTela();
        cout << "Bem vindo ao Jogo !";
        cout << "\n1 - Jogar";
        cout << "\n2 - Sobre";
        cout << "\n3 - Sair";
        cout << "\nEscolha uma opção e tecle ENTER";
        cin >> opcao;

        switch(opcao){
            case 1:
                cout << "Jogo Iniciado";
                break;
            case 2:
                cout << "Informações do Jogo";
                break;
            case 3:
                cout << "Até mais";
                break;    
        }
    }
}

int main(){

    menuinicial();

    return 0;
}