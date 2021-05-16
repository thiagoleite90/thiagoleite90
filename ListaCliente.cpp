 
#include "ListaCliente.hpp"
#include "Cliente.hpp"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

using namespace std;

void ListaCliente::adicionaCliente(){
  int id;
  string nome;
  string endereco;
  string telefone;
  string estado;

  system("clear");
  printf("================================================================\n");
  printf("   HOTEL TABAJARA - SISTEMA DE RESERVAS E OCUPACAO DE QUARTOS   \n");
  printf("================================================================\n");
  printf("                    Inserir Cliente  \n");
  printf("================================================================\n");
  printf("Nome.......: ");
  cin.ignore();
  getline(cin, nome);

  printf("Endereco...: ");
  getline(cin, endereco);

  printf("Telefone...: ");
  getline(cin, telefone);
  
  printf("Estado.....: ");
  cin >> estado;

  clientes.push_back(Cliente(nome, endereco, telefone, estado));
}


void ListaCliente::listaClientes(){
  system("clear");
  printf("================================================================\n");
  printf("                       Lista de Clientes  \n");
  printf("================================================================\n");

  for(int e = 0; e < clientes.size(); e++){
    cout << " Id: [" << clientes[e].getId() << "]" << "\n";
    cout << " | Nome: " << clientes[e].getNome() << "\n";
    cout << " | Endereco: " << clientes[e].getEndereco() << "\n";
    cout << " | Telefone: " << clientes[e].getTelefone() << "\n";
    cout << " | Estado: " << clientes[e].getEstado() << "\n";
    cout << " ------------------------------------------------------ " << "\n";
  }


}



void ListaCliente::alterarCliente() {
    int codigo;
    string nome;
    string endereco;
    string telefone;
    string estado;

    system("clear");
    printf("================================================================\n");
    printf("   HOTEL TABAJARA - SISTEMA DE RESERVAS E OCUPACAO DE QUARTOS   \n");
    printf("================================================================\n");
    printf("                     Alterar Clientes  \n");
    printf("================================================================\n");

    for (int e = 0; e < clientes.size(); e++) {
        cout << "  Id: [" << clientes[e].getId() << "] | Nome: " << clientes[e].getNome() << "     \n";
    }

    printf(" Digite o codigo do cliente que deseja alterar :  \n\n");
    cin >> codigo;

    printf("\nPreencha os dados novamente: \n\n");

    printf("Nome.......: ");
    cin.ignore();
    getline(cin, nome);

    printf("Endereco...: ");
    getline(cin, endereco);

    printf("Telefone...: ");
    getline(cin, telefone);

    printf("Estado.....: ");
    getline(cin, estado);

    for (int e = 0; e < clientes.size(); e++) {
        if (clientes[e].getId() == codigo) {
            clientes[e].setNome(nome);
            clientes[e].setEndereco(endereco);
            clientes[e].setTelefone(telefone);
            clientes[e].setEstado(estado);
        }
    }

}