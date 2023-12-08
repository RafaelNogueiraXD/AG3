
#include <iostream>
#include <string>
#include "interface.hpp"

using namespace std;
InterfaceG::InterfaceG(){
    // 
    string nome = pegaString("digite um nome: ");
    int valor = pegaInteiro("digite um valor: ");
    string nome2 = pegaString("digite outro nome: ");
    int valor2 = pegaInteiro("digite outro valor: ");
    
    cout << valor << endl;
    cout << nome << endl;
    cout << nome2 << endl;
    cout << valor2 << endl;
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