#include <iostream>
#include <vector>
#include <unordered_map>
#include "notafiscal.hpp"
using namespace std;

// Definições prévias de Data, Produto, Item, NotaFiscal

class INotasFiscais {
private:
    vector<pair<int, NotaFiscal>> notasFiscais;
public:
    bool addNotaFiscal(NotaFiscal nf) {
         for (auto &item : notasFiscais)
          {
              if (item.first == nf.getCodigo())
              {
                  return false; // Produto já existe
              }
          }
          notasFiscais.push_back(make_pair(nf.getCodigo(), nf));
          return true;
     }

    bool removeNotaFiscal(int codigo) {
        for (auto it = notasFiscais.begin(); it != notasFiscais.end(); ++it)
        {
            if (it->first == codigo)
            {
                notasFiscais.erase(it);
                return true;
            }
        }
        return false;
    }

    NotaFiscal getNotaFiscal(int codigo) {
      for (auto &item : notasFiscais)
      {
          if (item.first == codigo)
          {
              return item.second;
          }
      }
      throw runtime_error("Produto não encontrado");
    }

    bool updateNotaFiscal(int codigo, NotaFiscal nova) {
      for (auto &item : notasFiscais)
      {
          if (item.first == codigo)
          {
              item.second = nova;
              return true;
          }
      }
      return false;
    }

    bool addItem(int codigo, Item item) {
        NotaFiscal pesquisa = this->getNotaFiscal(codigo);
        vector<Item> it1 = pesquisa.getItens();
        it1.push_back(item);
        pesquisa.setItens(it1);
        this->updateNotaFiscal(codigo, pesquisa);
    }

    bool removeItem(int codigo) {
        /*
          NotaFiscal pesquisa = this->getNotaFiscal(codigo);
          vector<Item> it1 = pesquisa.getItens();
          vector<Item> novos;
          for(const auto&item1 : it1){
              if(item1.getCodigo() != 1 )
          }
          this->updateNotaFiscal(codigo, pesquisa);
        */
    }

};

// Implementações de Data, Produto, Item, NotaFiscal

