#include <iostream>
#include "notafiscal.hpp"
// Construtor
NotaFiscal::NotaFiscal(int codigo, Data data, double total)
    : codigo(codigo), data(data), total(total) {}

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
