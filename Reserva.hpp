#ifndef Reserva_hpp
#define Reserva_hpp

#include <vector>
#include<iostream>

using namespace std;

class Reserva
{
  public:
    Reserva(int cliente, int quarto, string data_inicial, string data_final);
    Reserva();

    int getCliente();
    void setCliente(int cod_cliente);

    int getQuarto();
    void setQuarto(int cod_quarto);

    string getDataInicial();
    void setDataInicial(string data_inicial);

    string getDataFinal();
    void setDataFinal(string data_final);

    int getId();
    void setId(int id);

    int geraId();


  private:
    int id;
    int static ultimoId;
    int cod_cliente;
    int cod_quarto;
    string data_inicial;
    string data_final;
};

#endif 