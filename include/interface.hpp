#include <iostream>
#include <string>
using namespace std;


class InterfaceG {
    public:
        InterfaceG();
        string setEnunciado(string Enun);
        string pegaString(string enunciado);
        int pegaInteiro(string enunciado);
        void teste();
};
