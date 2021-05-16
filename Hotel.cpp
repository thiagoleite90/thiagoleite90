#include "Hotel.hpp"
#include <iostream>
#include <stdlib.h>

int Hotel::ultimoId = 0;

Hotel::Hotel(string nome, string telefone, string estado) {
    this->setId(this->geraId());
    this->setNome(nome);
    this->setTelefone(telefone);
    this->setEstado(estado);
}

Hotel::Hotel() {
}


string Hotel::getNome() {
    return this->nome;
}

void Hotel::setNome(string nome) {
    this->nome = nome;
}

string Hotel::getTelefone() {
    return this->telefone;
}

void Hotel::setTelefone(string telefone) {
    this->telefone = telefone;
}

string Hotel::getEstado() {
    return this->estado;
}

void Hotel::setEstado(string estado) {
    this->estado = estado;
}

int Hotel::getId() {
    return this->id;
}

void Hotel::setId(int id) {
    this->id = id;
}

int Hotel::geraId()
{
    return this->ultimoId++;
}

