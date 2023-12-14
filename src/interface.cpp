
#include <iostream>
#include <string>
#include "interface.hpp"
#include "estoque.hpp"
#include "inotafiscal.hpp"

using namespace std;
InterfaceG::InterfaceG(){
    int opcao;
    Produto prod();
    Estoque MeuEstoque("./assets/mercado.csv");
    do{
        opcao=menu();
        switch(opcao){
            case 0:
                break;
            case 2: 
                break;
        }
    }while(opcao != 0 );
    
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
    getline(cin, conteudo);    
    return conteudo;
}
void InterfaceG::testeEstoque(){
    Produto prod = Produto(91, "rafael", 21,99999, "ser humano", {24,12,2023}, "unidade");
    Estoque mercado = Estoque("./assets/mercado.csv");
    mercado.addProduto(prod);
    if(mercado.subQuantidade(91,21))
        cout << "diminuido" << endl;
    else cout << "voce esta retirando mais do que tem" << endl;
    mercado.addQuantidade(91,1);
    mercado.updatePreco(91, 1000);
    Produto prod2 = Produto(91, "di", 5,100, "ete", {10,05,2052}, "peso");
    mercado.updateProduto(91, prod2);
    mercado.getProduto(91).showProduct();
}

int InterfaceG::menu(){
    int opcao;
    cout<<"O-Sair"<<endl;
    cout<<"1-Realizar compra"<<endl;
    cout<<"2-Adcionar Produto ao estoque"<<endl;
    cout<<"3-Remover Produto do estoque"<<endl;
    cout<<"4-Editar Produto do estoque"<<endl;
    cout<<"5-Mostrar estoque"<<endl;
    cout<<"6-Ver notas fiscais"<<endl;
    cout<<"7-Buscar Produto"<<endl;
    cout<<"8-Buscar Nota Fiscal"<<endl;
    cin >> opcao;
    return opcao;
}