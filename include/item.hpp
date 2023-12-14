#include <iostream>
#include "produto.hpp"
using namespace std;

class Item {
    private:
        int codigo;
        Produto prod;
        double qtd;
    public:
        Item(int codigo,Produto prod, double qtd);
        Produto getProduto();
        int getCodigo();
};