#include "data.hpp"

/**
 * @brief Sobrecarga do operador de inserção de fluxo para imprimir a data no formato "dia/mes".
 * 
 * @param os Referência para o fluxo de saída.
 * @param obj Referência para o objeto Data a ser impresso.
 * @return std::ostream& Referência para o fluxo de saída.
 */
std::ostream &operator<<(std::ostream &os, const Data &obj)
{
    os << obj.getDia() << "/" << obj.getMes() <<  "/" << obj.getAno();
    return os;
}

/**
 * @brief Construtor padrão da classe Data.
 * 
 * Inicializa o dia e mês como 0.
 */
Data::Data()
{
    this->dia = 0;
    this->mes = 0;
}

/**
 * @brief Obtém o valor do dia.
 * 
 * @return int O valor do dia.
 */
int Data::getDia() const
{
    return this->dia;
}

/**
 * @brief Obtém o valor do mês.
 * 
 * @return int O valor do mês.
 */
int Data::getMes() const
{
    return this->mes;
}
int Data::getAno() const
{
    return this->ano;
}

/**
 * @brief Define o valor do dia.
 * 
 * @param dia O novo valor do dia.
 */
void Data::setDia(int dia)
{
    this->dia = dia;
}
void Data::setAno(int ano)
{
    this->ano = ano;
}

/**
 * @brief Define o valor do mês.
 * 
 * @param mes O novo valor do mês.
 */
void Data::setMes(int mes)
{
    this->mes = mes;
}

/**
 * @brief Construtor da classe Data com parâmetros.
 * 
 * @param dia O dia da data.
 * @param mes O mês da data.
 */
Data::Data(int dia, int mes, int ano)
{
    this->dia = dia;
    this->mes = mes;
    this->ano = ano;
}
