#include "Cliente.hpp"
#include <iostream>
#include <stdlib.h>

int Cliente::ultimoId = 0;

Cliente::Cliente(string nome, string endereco, string telefone, string estado){
  this->setId(this->geraId());
  this->setNome(nome);
  this->setEndereco(endereco);
  this->setTelefone(telefone);
  this->setEstado(estado);
}

Cliente::Cliente(){
}

string Cliente::getNome(){
  return this->nome;
}

void Cliente::setNome(string nome){
  this->nome = nome;
}

string Cliente::getEndereco() {
    return this->endereco;
}

void Cliente::setEndereco(string endereco) {
    this->endereco = endereco;
}

string Cliente::getTelefone() {
    return this->telefone;
}

void Cliente::setTelefone(string telefone) {
    this->telefone = telefone;
}

string Cliente::getEstado(){
  return this->estado;
}

void Cliente::setEstado(string estado){
  this->estado = estado;
}

int Cliente::getId(){
  return this->id;
}

void Cliente::setId(int id){
  this->id = id;
}

int Cliente::geraId()
{
    return this->ultimoId++;
}