
#include <iostream>
#include <string>
#include "interface.hpp"
#include "notafiscal.hpp"
#include "produto.hpp"

using namespace std;
InterfaceG::InterfaceG(){
    // 
    //    teste();
    Produto prod = Produto(1, "rafael", 21,99999, "ser humano", {12,12,2023});
    prod.showProduct();
}
int InterfaceG::pegaInteiro(string enunciado){
    int valor;
    cout << enunciado << endl;
    cin >> valor;
    getchar();
    return valor;
}
string InterfaceG::pegaString(string enunciado){
    string conteudo;
    cout << enunciado<< endl;
    // fflush(stdin);
    getline(cin, conteudo);    
    return conteudo;
}

// void InterfaceG::menu(){
// }