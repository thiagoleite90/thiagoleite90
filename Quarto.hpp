#ifndef Quarto_hpp
#define Quarto_hpp

#include <vector>
#include<iostream>

using namespace std;

class Quarto
{
  public:
    Quarto(string tipo, int camas, string tipo_camas, float valor_diaria);
    Quarto();

    string getTipo();
    void setTipo(string Tipo);

    int getCamas();
    void setCamas(int camas);

    string getTipoCamas();
    void setTipoCamas(string tipo_cama);

    int getReservado();
    void setReservado(int reservado);

    int getClienteReservado();
    void setClienteReservado(int reservado);

    float getValorDiaria();
    void setValorDiaria(float valor_diaria);

    int getId();
    void setId(int id);

    int geraId();


  private:
    int id;
    int static ultimoId;
    string tipo;
    int camas;
    string tipo_camas;
    int reservado;
    int cliente_reservado;
    float valor_diaria;
};

#endif 