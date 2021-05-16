#include "Funcionario.hpp"
#include <iostream>
#include <stdlib.h>

int Funcionario::ultimoId = 0;

Funcionario::Funcionario(string nome, string telefone){
  this->setId(this->geraId());
  this->setNome(nome);
  this->setTelefone(telefone);
}

string Funcionario::getNome(){
  return this->nome;
}

void Funcionario::setNome(string nome){
  this->nome = nome;
}

string Funcionario::getTelefone() {
    return this->telefone;
}

void Funcionario::setTelefone(string telefone) {
    this->telefone = telefone;
}

int Funcionario::getId(){
  return this->id;
}

void Funcionario::setId(int id){
  this->id = id;
}

int Funcionario::geraId()
{
    return this->ultimoId++;
}

