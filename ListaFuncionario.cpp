 
#include "ListaFuncionario.hpp"
#include "Funcionario.hpp"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void ListaFuncionario::adicionaFuncionario(ListaHotel listaHotel){

}


void ListaFuncionario::listaFuncionario(){
  system("cls");
  printf("================================================================\n");
  printf("                       Lista de Funcionarios  \n");
  printf("================================================================\n");

  for(int e = 0; e < funcionarios.size(); e++){
    cout << " Id: [" << funcionarios[e].getId() << "] | Nome: " << funcionarios[e].getNome() << "\n";
  }

}
