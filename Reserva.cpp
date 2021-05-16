#include "Reserva.hpp"
#include <iostream>
#include <stdlib.h>

int Reserva::ultimoId = 0;

Reserva::Reserva(int cliente, int quarto, string data_inicial, string data_final){
  this->setId(this->geraId());
  this->setCliente(cliente);
  this->setQuarto(quarto);
  this->setDataInicial(data_inicial);
  this->setDataFinal(data_final);
}

Reserva::Reserva(){
}

int Reserva::getCliente(){
  return this->cod_cliente;
}

void Reserva::setCliente(int cod_cliente){
  this->cod_cliente = cod_cliente;
}

int Reserva::getQuarto() {
  return this->cod_quarto;
}

void Reserva::setQuarto(int cod_quarto) {
  this->cod_quarto = cod_quarto;
}

string Reserva::getDataInicial() {
  return this->data_inicial;
}

void Reserva::setDataInicial(string data_inicial) {
  this->data_inicial = data_inicial;
}

string Reserva::getDataFinal() {
  return this->data_final;
}

void Reserva::setDataFinal(string data_final) {
  this->data_final = data_final;
}

int Reserva::getId(){
  return this->id;
}

void Reserva::setId(int id){
  this->id = id;
}

int Reserva::geraId(){
  return this->ultimoId++;
}
