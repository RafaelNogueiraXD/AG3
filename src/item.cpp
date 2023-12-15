#include <iostream>
#include "item.hpp"

Item::Item(int codigo, Produto prod, double qtd) : prod(prod), qtd(qtd), codigo(codigo){

}
Produto Item::getProduto(){
    return prod;
}
int Item::getCodigo(){
    return codigo;
}
double Item::getQtd(){
    return qtd;
}