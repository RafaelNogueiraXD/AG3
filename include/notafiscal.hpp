#include <iostream>
#include <vector>
#include "item.hpp"

// código, data, relação de itens e total, 
class NotaFiscal {
    private:
        int codigo;
        Data data;
        vector<Item> itens;
        double total;
    public:
        // Construtor
        NotaFiscal(int codigo, Data data, double total);
        NotaFiscal(int cod, Data dat, vector<Item> itens, double total);
        NotaFiscal(int cod);

        // Getters
        int getCodigo() const;
        Data getData() const;
        const vector<Item>& getItens() const;
        double getTotal() const;

        // Setters
        void setCodigo(int codigo);
        void setData(const Data& data);
        void setItens(const vector<Item>& itens);
        void setTotal(double total);
        void showNota();
};