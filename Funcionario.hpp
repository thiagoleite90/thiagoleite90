#ifndef Funcionario_hpp
#define Funcionario_hpp

#include <vector>
#include<iostream>

using namespace std;

class Funcionario
{
  public:
    Funcionario(string nome, string telefone);

    string getNome();
    void setNome(string nome);

    string getTelefone();
    void setTelefone(string telefone);

    int getId();
    void setId(int id);

    int geraId();

  private:
    int id;
    int static ultimoId;
    string nome;
    string telefone;

};

#endif 