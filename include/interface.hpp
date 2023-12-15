#include <iostream>
#include <string>
#include "estoque.hpp"
#include "inotafiscal.hpp"
using namespace std;


class InterfaceG {
    private:
        vector<NotaFiscal> notasfiscais;
    public:
        InterfaceG();
        string setEnunciado(string Enun);
        string pegaString(string enunciado);
        int pegaInteiro(string enunciado);
        double pegaDouble(string enunciado);
        void testeEstoque();
        void teste();
        int menu();
        Estoque realizarCompra(Estoque mercado);
        void mostrarNotasFiscais();
        NotaFiscal buscaNota(int codigo);
};
