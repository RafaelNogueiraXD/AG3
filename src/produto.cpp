#include <iostream>
#include "produto.hpp"
using namespace std;
Produto::Produto(int codigo1, string nome1, double qtd1, double valor1, string desc1, Data validade1, string qtdTipo1)
     : codigo(codigo1), nome(nome1),quantidade(qtd1), valor(valor1), desc(desc1), validade(validade1){
    if(qtdTipo1 == "peso"){
        qtdTipo = peso;
        
    }
    else qtdTipo = unidade;
}

string Produto::getNome() {
    return nome;
}

void Produto::setNome(string nome1) {
    nome = nome1;
}

double Produto::getQuantidade() {
    return quantidade;
}

void Produto::setQuantidade(double qtd1) {
    quantidade = qtd1;
} 

double Produto::getvalor() {
    return valor;
}

void Produto::setvalor(double valor1) {
    valor = valor1;
}
int Produto::getCodigo() {
    return codigo;
}

void Produto::setCodigo(int codigo1) {
    codigo = codigo1;
}

string Produto::getDesc() {
    return desc;
}

void Produto::setDesc(string desc1) {
    desc = desc1;
}

Data Produto::getValidade() {
    return validade;
}
tipo Produto::getqtdTipo(){
    return qtdTipo;
}  
void Produto::setqtdTipo(tipo qtd1Tipo){
    qtd1Tipo = qtdTipo;
}  
    

void Produto::setValidade(Data validade1) {
    validade = validade1;
}
void Produto::showProduct(){
    cout << "Codigo: " << codigo << endl;
    cout << "Nome: " << nome << endl;
    cout << "Valor: " << valor << endl;
    cout << "Descricao: " << desc << endl;
    cout << "Validade: " << validade << endl;
    cout << "Quantidade: " << quantidade;
    if(getqtdTipo() == peso)
        cout << " (Kg)" << endl;
    else cout << " unidades" << endl;
}
string Produto::toString() const {
    stringstream ss;
    ss << "Nome: " << nome << ", Preço: " << valor << "\n Quantidade: " << quantidade;

    return ss.str();
}
/*
    - imagenemos um estoque, no qual ele receberá produto
    
    - estoque terá apenas o atributo produtos que será um vector e um valor id
    



*/