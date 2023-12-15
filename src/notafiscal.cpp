#include <iostream>
#include "notafiscal.hpp"
// Construtor
NotaFiscal::NotaFiscal(int codigo, Data data, double total)
    : codigo(codigo), data(data), total(total) {

    }


NotaFiscal::NotaFiscal(int cod, Data dat, vector<Item> itens, double total)
    : codigo(cod), itens(itens), data(dat), total(total) {}
NotaFiscal::NotaFiscal(int cod) : codigo(cod){}

// Getters
int NotaFiscal::getCodigo() const {
    return codigo;
}

Data NotaFiscal::getData() const {
    return data;
}

const vector<Item>& NotaFiscal::getItens() const {
    return itens;
}

double NotaFiscal::getTotal() const {
    return total;
}

// Setters
void NotaFiscal::setCodigo(int novoCodigo) {
    codigo = novoCodigo;
}

void NotaFiscal::setData(const Data& novaData) {
    data = novaData;
}

void NotaFiscal::setItens(const vector<Item>& novosItens) {
    itens = novosItens;
}

void NotaFiscal::setTotal(double novoTotal) {
    total = novoTotal;
}
void NotaFiscal::showNota(){
    for(int x = 0; x < 30 ; x++)cout << " -";
    cout << endl;
    cout << "Codigo:  " << codigo << endl;
    cout << "data:  " << data << endl;
    for(auto& item : itens){
        cout << item.getCodigo() << endl;
        cout << item.getProduto().getNome() << endl;
        cout << "Quantidade :  " << item.getQtd() << "  " ;
        if(item.getProduto().getqtdTipo() == peso)printf("Kg\n");
        else printf("Unidades \n");
    }
    cout << "Valor total: " << total << endl;
    for(int x = 0; x < 30 ; x++)cout << " -";
    cout << endl;
}
