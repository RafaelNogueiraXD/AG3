#include <iostream>
#include <vector>
#include "item.hpp"

// código, data, relação de itens e total, 
class NotaFiscal {
    private:
        int codigo;
        Data data;
        vector<Item> itens;
        int total;
    public:
        // Construtor
        NotaFiscal(int codigo, Data data, double total);

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
};