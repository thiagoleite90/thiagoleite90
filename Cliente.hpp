#ifndef Cliente_hpp
#define Cliente_hpp

#include <vector>
#include<iostream>

using namespace std;

class Cliente
{
  public:
    Cliente(string nome, string endereco, string telefone, string estado);
    Cliente();

    string getNome();
    void setNome(string nome);

    string getEndereco();
    void setEndereco(string endereco);

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
    string endereco;
    string telefone;
    string estado;

};

#endif 