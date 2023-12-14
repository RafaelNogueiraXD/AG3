
#include <iostream>
#include <string>
#include "interface.hpp"
#include "estoque.hpp"
#include "inotafiscal.hpp"

using namespace std;
InterfaceG::InterfaceG(){
    Estoque mercado = Estoque("./assets/mercado.csv");
    cout << "adicionando uma nota fiscal" << endl;
    int x = 15;
    vector<Item> itensNota;
    double valor = 0;
    while(x < 20){
        Produto pesquisa = mercado.getProduto(x);
        Item item = Item(pesquisa.getCodigo(),pesquisa, 1);
        valor += pesquisa.getvalor();
        mercado.subQuantidade(x,1);
        itensNota.push_back(item);
        x++;
    }
    NotaFiscal notinha = NotaFiscal(1,{14,12,2023}, itensNota, valor);
    
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