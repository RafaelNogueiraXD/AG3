
#include <iostream>
#include <string>
#include "interface.hpp"

using namespace std;
InterfaceG::InterfaceG(){
    int opcao;
    Estoque MeuEstoque("./assets/mercado.csv");
    do{
        opcao=menu();
        switch(opcao){
            case 0:
                break;
            case 2:{
                int codigo;
                string nome,desc, qtdtipo;
                double quanti, value;
                int dia,mes, ano;
                codigo= pegaInteiro("Digite o código do produto:");
                nome = pegaString("Digite o nome do Produto:");
                desc= pegaString("Digite a descricao do Produto:");
                qtdtipo = pegaString("Digite o Tipo da quantidade do produto (Unidades ou peso)");
                
                Produto prod(codigo,nome,quanti,value,desc,Data(dia,mes,ano),qtdtipo);
                MeuEstoque.addProduto(prod);
                break;
            }
            case 3:{
                int codigo;
                codigo = pegaInteiro("Digite o Código do Produto a ser excluido:");
                MeuEstoque.removeProduto(codigo);
                break;
            }
            case 4:{
                int codigo;
                string nome,desc, qtdtipo;
                double quanti, value;
                int dia,mes, ano;
                Produto prod(codigo,nome,quanti,value,desc,Data(dia,mes,ano),qtdtipo);
                codigo = pegaInteiro("Digite o Código do Produto a ser editado:");
                MeuEstoque.updateProduto(codigo,prod);
                break;
            }
            case 5:
                MeuEstoque.mostraEstoque();
                break;
            case 7:{
                int codigo;
                codigo = pegaInteiro("Digite o Código do Produto a ser excluido:");
                Produto Busca = MeuEstoque.getProduto(codigo);
                Busca.showProduct();
                break;
            }


        }
    }while(opcao != 0 );
    
}
int InterfaceG::pegaInteiro(string enunciado){
    int valor;
    cout << enunciado << endl;
    cin >> valor;
    getchar();
    return valor;
}
double InterfaceG::pegaDouble(string enunciado){
    double valor;
    cout << enunciado << endl;
    cin >> valor;
    getchar();
    return valor;
}
string InterfaceG::pegaString(string enunciado){
    string conteudo;
    cout << enunciado<< endl;
    getline(cin, conteudo);    
    return conteudo;
}
void InterfaceG::testeEstoque(){
    Produto prod = Produto(91, "rafael", 21,99999, "ser humano", {24,12,2023}, "unidade");
    Estoque mercado = Estoque("./assets/mercado.csv");
    mercado.addProduto(prod);
    if(mercado.subQuantidade(91,21))
        cout << "diminuido" << endl;
    else cout << "voce esta retirando mais do que tem" << endl;
    mercado.addQuantidade(91,1);
    mercado.updatePreco(91, 1000);
    Produto prod2 = Produto(91, "di", 5,100, "ete", {10,05,2052}, "peso");
    mercado.updateProduto(91, prod2);
    mercado.getProduto(91).showProduct();
}

int InterfaceG::menu(){
    int opcao;
    cout<<"O-Sair"<<endl;
    cout<<"1-Realizar compra"<<endl;
    cout<<"2-Adcionar Produto ao estoque"<<endl;
    cout<<"3-Remover Produto do estoque"<<endl;
    cout<<"4-Editar Produto do estoque"<<endl;
    cout<<"5-Mostrar estoque"<<endl;
    cout<<"6-Ver notas fiscais"<<endl;
    cout<<"7-Buscar Produto"<<endl;
    cout<<"8-Buscar Nota Fiscal"<<endl;
    cin >> opcao;
    return opcao;
}
Estoque InterfaceG::realizarCompra(Estoque mercado){
    int op, numProdutos;
    do{

        mercado.mostraEstoque();
        op = pegaInteiro("digite o numero do produto");
        Produto pesquisado = mercado.getProduto(op); 
        numProdutos = pegaDouble("digite a quantia desse produto");
        while(pesquisado.getQuantidade() < numProdutos){
            numProdutos = pegaDouble("digite um numero menor: ");
        }
        while(numProdutos - int(numProdutos) != 0 && pesquisado.getqtdTipo() == unidade){
            numProdutos = pegaDouble("digite um numero inteiro: ");
        }

    }while(op);

}