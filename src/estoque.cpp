#include <iostream>
#include <utility>
#include "produto.hpp"
#include "estoque.hpp"
using namespace std;
Data convertDate(const std::string &date)
{
    int day, month, year;
    std::stringstream dateStream(date);
    char delimiter;

    dateStream >> day >> delimiter >> month >> delimiter >> year;
    return {day, month, year};
}
// Adici
void Estoque::mostraEstoque()
{
    for (const auto &par : produtos)
    {
        int id = par.first;
        const Produto &produto = par.second;
        cout << "ID: " << id << ", " << produto.toString() << endl;
    }
}
Estoque::Estoque(const string &caminhoArquivo)
{
    vector<Produto> produtos;
    ifstream arquivo(caminhoArquivo);

    if (!arquivo.is_open())
    {
        cerr << "Erro ao abrir o arquivo: " << caminhoArquivo << endl;
    }

    string linha;
    getline(arquivo, linha); // Lê o cabeçalho e o descarta

    while (getline(arquivo, linha))
    {
        stringstream ss(linha);
        string campo;
        vector<string> campos;

        while (getline(ss, campo, ','))
        {
            campos.push_back(campo);
        }

        if (campos.size() != 7)
        {
            cerr << "Linha mal formatada: " << linha << endl;
            continue;
        }

        int codigo = stoi(campos[0]);
        string nome = campos[1];
        double quantidade = stod(campos[2]);
        double valor = stod(campos[3]);
        string desc = campos[4];
        Data validade = convertDate(campos[5]);
        string qtdTipo = campos[6];

        produtos.push_back(Produto(codigo, nome, quantidade, valor, desc, validade, qtdTipo));
    }

    arquivo.close();

    for (const auto &prod : produtos)
    {
        addProduto(prod);
    }
}
bool Estoque::addProduto(Produto p)
{
    for (auto &item : produtos)
    {
        if (item.first == p.getCodigo())
        {
            return false; // Produto já existe
        }
    }
    produtos.push_back(make_pair(p.getCodigo(), p));
    return true;
}

// Remove um produto do estoque
bool Estoque::removeProduto(int codigo)
{
    for (auto it = produtos.begin(); it != produtos.end(); ++it)
    {
        if (it->first == codigo)
        {
            produtos.erase(it);
            return true;
        }
    }
    return false;
}

// Retorna um produto pelo código
Produto Estoque::getProduto(int codigo)
{
    for (auto &item : produtos)
    {
        if (item.first == codigo)
        {
            return item.second;
        }
    }
    Produto prod(0);
    return prod;
}

// Atualiza um produto existente
bool Estoque::updateProduto(int codigo, Produto novo)
{
    for (auto &item : produtos)
    {
        if (item.first == codigo)
        {
            item.second = novo;
            return true;
        }
    }
    return false;
}

// Atualiza o preço de um produto
bool Estoque::updatePreco(int codigo, double novo)
{
    for (auto &item : produtos)
    {
        if (item.first == codigo)
        {
            item.second.setvalor(novo);
            return true;
        }
    }
    return false;
}

// Adiciona quantidade a um produto
bool Estoque::addQuantidade(int codigo, double quantidade)
{
    for (auto &item : produtos)
    {
        if (item.first == codigo)
        {
            cout << "Produto: " << item.second.getNome() << " foi encontrado! " << endl;
            auto qtdAtual = item.second.getQuantidade();
            cout << "Quantidade anterior: " << qtdAtual << endl;
            item.second.setQuantidade(qtdAtual + quantidade);
            cout << "Quantidade atual: " << item.second.getQuantidade() << endl;

            return true;
        }
    }
    return false;
}

// Subtrai quantidade de um produto
bool Estoque::subQuantidade(int codigo, double quantidade)
{
    for (auto &item : produtos)
    {
        if (item.first == codigo)
        {
            auto qtdAtual = item.second.getQuantidade();
            double novaQtd = qtdAtual - quantidade;
            if (novaQtd < 0)
                return false;
            item.second.setQuantidade(novaQtd);
            return true;
        }
    }
    return false;
}