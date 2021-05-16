#include "Quarto.hpp"
#include <iostream>
#include <stdlib.h>

int Quarto::ultimoId = 0;

Quarto::Quarto(string tipo, int camas, string tipo_camas, float valor_diaria){
  this->setId(this->geraId());
  this->setTipo(tipo);
  this->setCamas(camas);
  this->setTipoCamas(tipo_camas);
  this->setValorDiaria(valor_diaria);
  this->setReservado(0);
  this->setClienteReservado(-1);
}

Quarto::Quarto(){
}

string Quarto::getTipo(){
  if(this->tipo=="S"){
    return "Simples";
  }else{
    return "Luxo";
  }
}

void Quarto::setTipo(string tipo){
  this->tipo = tipo;
}

int Quarto::getCamas() {
    return this->camas;
}

void Quarto::setCamas(int camas) {
    this->camas = camas;
}

string Quarto::getTipoCamas() {
    if(this->tipo_camas=="C"){
      return "Casal";
    }else{
      return "Solteiro";
    }
}

void Quarto::setTipoCamas(string tipo_camas) {
    this->tipo_camas = tipo_camas;
}

int Quarto::getReservado(){
  return this->reservado;
}

void Quarto::setReservado(int reservado){
  this->reservado = reservado;
}

int Quarto::getClienteReservado(){
  return this->cliente_reservado;
}

void Quarto::setClienteReservado(int cliente_reservado){
  this->cliente_reservado = cliente_reservado;
}

float Quarto::getValorDiaria(){
  return this->valor_diaria;
}

void Quarto::setValorDiaria(float valor_diaria){
  this->valor_diaria = valor_diaria;
}


int Quarto::getId(){
  return this->id;
}

void Quarto::setId(int id){
  this->id = id;
}

int Quarto::geraId(){
    return this->ultimoId++;
}
