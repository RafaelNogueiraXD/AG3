#include <iostream>
#include "produto.hpp"
using namespace std;
Produto::Produto(int codigo1, string nome1, double qtd1, double valor1, string desc1, Data validade1)
    : codigo(codigo1), nome(nome1), qtd(qtd1), valor(valor1), desc(desc1), validade(validade1) {
}

string Produto::getNome() {
    return nome;
}

void Produto::setNome(string nome1) {
    nome = nome1;
}

double Produto::getqtd() {
    return qtd;
}

void Produto::setqtd(double qtd1) {
    qtd = qtd1;
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

void Produto::setValidade(Data validade1) {
    validade = validade1;
}
void Produto::showProduct(){
    cout << "Codigo: " << codigo << endl;
    cout << "Nome: " << nome << endl;
    cout << "Quantidade: " << qtd<< endl;
    cout << "Valor: " << valor << endl;
    cout << "Descricao: " << desc << endl;
    cout << "Validade" << validade << endl;
}


/*
    - imagenemos um estoque, no qual ele receberá produto
    
    - estoque terá apenas o atributo produtos que será um vector e um valor id
    



*/