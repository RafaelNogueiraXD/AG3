#pragma once
#include <iostream>
#include <string>
using namespace std;

// Definição da classe Data
class Data
{
private:
    int dia; ///< Dia da data.
    int mes; ///< Mês da data.
    int ano; ///< Mês da data.

public:
    /**
     * @brief Construtor da classe Data com parâmetros.
     * 
     * @param dia O dia da data.
     * @param mes O mês da data.
     */
    Data(int dia, int mes, int ano);

    /**
     * @brief Construtor padrão da classe Data.
     */
    Data();

    /**
     * @brief Obtém o valor do dia.
     * 
     * @return int O valor do dia.
     */
    int getDia() const;
    int getAno() const;

    /**
     * @brief Obtém o valor do mês.
     * 
     * @return int O valor do mês.
     */
    int getMes() const;

    /**
     * @brief Define o valor do dia.
     * 
     * @param dia O novo valor do dia.
     */
    void setDia(int dia);

    /**
     * @brief Define o valor do mês.
     * 
     * @param mes O novo valor do mês.
     */
    void setMes(int mes);

    /**
     * @brief Sobrecarga do operador de inserção de fluxo para imprimir a data.
     * 
     * @param os Referência para o fluxo de saída.
     * @param obj Referência para o objeto Data a ser impresso.
     * @return std::ostream& Referência para o fluxo de saída.
     */
    void setAno(int ano);
    friend std::ostream &operator<<(std::ostream &os, const Data &obj);
};

