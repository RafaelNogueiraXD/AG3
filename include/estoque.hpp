#include <iostream>
#include <vector>
#include <sstream>
#include <fstream>
#include "produto.hpp"
#include"Iproduct.hpp"

using namespace std;
class Estoque : public IProdutos  {
    protected:
        //esse pair refere-se que int é o idProduto e Produto é o Produto :)
        vector<pair<int, Produto>> produtos;
    public: 

  Estoque(const string& caminhoArquivo);
   bool addProduto(Produto p); 

   bool removeProduto(int codigo) override;
   Produto getProduto(int codigo)override;
  // void setProduto(); 
   bool updateProduto(int codigo, Produto novo)override;
   bool updatePreco(int codigo, double novo)override;
   bool addQuantidade(int codigo, double quantidade)override;
   bool subQuantidade(int codigo, double quantidade)override;
   void mostraEstoque();
   string toString() ;
};