#include <iostream>
#include <string>
#include "data.hpp"
#pragma once;
using namespace std;

class Produto {
private:
    int codigo;
    string nome;
    double qtd;
    double valor;
    string desc;
    Data validade;

public:
   Produto(int codigo1, string nome1, double qtd1, double valor1, string desc1, Data validade1);

    // Getters e Setters existentes
    string getNome();  
    void setNome(string nome1);  
    double getqtd();  
    void setqtd(double qtd1);  
    double getvalor();  
    void setvalor(double valor1);

    // Getters e Setters para os novos membros
    int getCodigo();
    void setCodigo(int codigo1);
    string getDesc();
    void setDesc(string desc1);
    Data getValidade();
    void setValidade(Data validade1);
    void showProduct();
};
