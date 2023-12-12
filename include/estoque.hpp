#include <iostream>
#include <vector>
#include "produto.hpp"

using namespace std;
class Estoque {
    private:
        //esse pair refere-se que int é o idProduto e Produto é o Produto :)
        vector<pair<int, Produto>> Produtos;
        

    public: 

  Estoque(string caminhoCSV);
  virtual bool addProduto(Produto p); 

  virtual bool removeProduto(int codigo);
  virtual Produto getProduto(int codigo);
  //virtual void setProduto();  
  virtual bool updateProduto(int codigo, Produto novo);
  virtual bool updatePreco(int codigo, double novo);
  virtual bool addQuantidade(int codigo, double quantidade);
  virtual bool subQuantidade(int codigo, double quantidade);
};