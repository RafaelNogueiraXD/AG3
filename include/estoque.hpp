#include <iostream>
#include <vector>
#include <sstream>
#include <fstream>
#include "produto.hpp"

using namespace std;
class Estoque {
    protected:
        //esse pair refere-se que int é o idProduto e Produto é o Produto :)
        vector<pair<int, Produto>> produtos;
    public: 

  Estoque(const string& caminhoArquivo);
   bool addProduto(Produto p); 

   bool removeProduto(int codigo);
   Produto getProduto(int codigo);
  // void setProduto(); 
   bool updateProduto(int codigo, Produto novo);
   bool updatePreco(int codigo, double novo);
   bool addQuantidade(int codigo, double quantidade);
   bool subQuantidade(int codigo, double quantidade);
   void mostraEstoque();
   string toString() ;
};