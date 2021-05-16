#ifndef Hotel_hpp
#define Hotel_hpp

#include <vector>
#include<iostream>

#include "Funcionario.hpp"

using namespace std;


class Hotel
{
    public:
        Hotel(string nome, string telefone, string estado);

        Hotel();

        string getNome();
        void setNome(string nome);

        string getTelefone();
        void setTelefone(string telefone);

        string getEstado();
        void setEstado(string Estado);

        int getId();
        void setId(int id);

        int geraId();


    private:
        int id;
        int static ultimoId;
        string nome;
        string telefone;
        string estado;

        vector<Funcionario> funcionarios;
};

#endif 