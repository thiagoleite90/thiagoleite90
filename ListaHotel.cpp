#include "ListaHotel.hpp"
#include "ListaFuncionario.hpp"
#include "ListaCliente.hpp"
#include "Funcionario.hpp"
#include "Quarto.hpp"
#include "Cliente.hpp"
#include "Reserva.hpp"
#include "Hotel.hpp"
#include <iostream>
#include <stdlib.h>

void ListaHotel::adicionaHotel() {
    int id;
    string nome;
    string telefone;
    string estado;

    system("cls");
    printf("================================================================\n");
    printf("          SISTEMA DE RESERVAS E OCUPACAO DE QUARTOS   \n");
    printf("================================================================\n");
    printf("                      Adicionar Hotel \n");
    printf("================================================================\n");

    printf("Nome......: ");
    cin.ignore();
    getline(cin, nome);

    printf("Telefone..: ");
    getline(cin, telefone);

    printf("Estado....: ");
    getline(cin, estado);

    hoteis.push_back(Hotel(nome, telefone, estado));
}

vector<Funcionario> ListaHotel::getFuncionarios() {
    return this->funcionarios;
}

void ListaHotel::listaHotel() {
    Hotel hotel;
    system("clear");
    printf("\n================================================================\n");
    cout << "Total de " << hoteis.size() << " Hotel(is) \n";
    printf("================================================================\n");
    for (int i = 0; i < hoteis.size(); i++)
    {
        cout << "| Id.........: [" << hoteis[i].getId() << "]" << endl
            << " | Nome.......: " << hoteis[i].getNome() << endl
            << " | Telefone...: " << hoteis[i].getTelefone() << endl
            << " | Estado.... : " << hoteis[i].getEstado() << endl;
    }
}

void ListaHotel::adicionaFuncionario(ListaHotel listaHotel) {
    int id;
    string nome;
    string endereco;
    string telefone;
    string estado;

    system("clear");
    printf("================================================================\n");
    printf("          SISTEMA DE RESERVAS E OCUPACAO DE QUARTOS   \n");
    printf("================================================================\n");
    printf("                    Inserir Funcionario  \n");
    printf("================================================================\n");
    printf("Nome.......: ");
    cin.ignore();
    getline(cin, nome);

    printf("Telefone...: ");
    getline(cin, telefone);

    listaHotel.getFuncionarios().push_back(Funcionario(nome, telefone));
}



void ListaHotel::adicionaQuarto(ListaHotel listaHotel) {
    int id;
    string tipo;
    int camas;
    string tipo_camas;
    float valor_diaria;

    system("cls");
    printf("================================================================\n");
    printf("          SISTEMA DE RESERVAS E OCUPACAO DE QUARTOS   \n");
    printf("================================================================\n");
    printf("                      Adicionar Quarto \n");
    printf("================================================================\n");

    printf("Tipo (S) Simples ou (L) Luxo...: ");
    cin.ignore();
    getline(cin, tipo);

    printf("Quantidade de Camas..: ");
    cin >> camas;

    printf("Tipo de Cama (C) Casal ou (S) Solteiro...: ");
    cin.ignore();
    getline(cin, tipo_camas);

    printf("Valor da Diaria R$: ");
    cin >> valor_diaria;

    quartos.push_back(Quarto(tipo, camas, tipo_camas, valor_diaria));
}


void ListaHotel::reservarQuarto(ListaHotel listaHotel){
    int id;
    int cod_cliente;
    int cod_quarto;
    string data_inicial;
    string data_final;

    system("cls");
    printf("================================================================\n");
    printf("          SISTEMA DE RESERVAS E OCUPACAO DE QUARTOS   \n");
    printf("================================================================\n");
    printf("                      Reservar Quarto \n");
    printf("================================================================\n");

    listaClientes();
    printf("Codigo do Cliente..: ");
    cin >> cod_cliente;

    listaQuartos();

    bool quartoReservado = true;

    do{
      printf("Codigo do Quarto..: ");
      cin >> cod_quarto;

      for(int r = 0; r < reservas.size(); r++){
        if(reservas[r].getQuarto()==cod_quarto){
          printf("Esse quarto ja esta reservado, tente outro por favor! \n");
          quartoReservado = false;
          break;
        }
        quartoReservado = true;
      }

    }while(!quartoReservado);

    printf("Data Inicial...: ");
    cin.ignore();
    getline(cin, data_inicial);

    printf("Data Final: ");
    getline(cin, data_final);

    reservas.push_back(Reserva(cod_cliente, cod_quarto, data_inicial, data_final));
}


void ListaHotel::listaQuartos(){
  for(int i = 0; i < quartos.size(); i++){
    cout << " Id: [" << quartos[i].getId() << "]" << "\n";
    cout << " | Tipo...............: " << quartos[i].getTipo() << "\n";
    cout << " | Camas..............: " << quartos[i].getCamas() << "\n";
    cout << " | Valor Diária R$....: " << quartos[i].getValorDiaria() << "\n";
    cout << " ------------------------------------------------------ " << "\n";    
  }
}

void ListaHotel::listaClientes(){
 
  for(int e = 0; e < this->clientes.size(); e++){
    cout << " Id: [" << this->clientes[e].getId() << "]" << "\n";
    cout << " | Nome.......: " << this->clientes[e].getNome() << "\n";
    cout << " | Endereco...: " << this->clientes[e].getEndereco() << "\n";
    cout << " | Telefone...: " << this->clientes[e].getTelefone() << "\n";
    cout << " | Estado.....: " << this->clientes[e].getEstado() << "\n";
    cout << " ------------------------------------------------------ " << "\n";
  }
}


void ListaHotel::adicionaCliente(){
  int id;
  string nome;
  string endereco;
  string telefone;
  string estado;

  system("clear");
  printf("================================================================\n");
  printf("          SISTEMA DE RESERVAS E OCUPACAO DE QUARTOS   \n");
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


void ListaHotel::alterarCliente(){
   int codigo;
    string nome;
    string endereco;
    string telefone;
    string estado;

    system("clear");
    printf("================================================================\n");
    printf("          SISTEMA DE RESERVAS E OCUPACAO DE QUARTOS   \n");
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


void ListaHotel::relatorioReservas(){
  system("clear");
  printf("================================================================\n");
  printf("          SISTEMA DE RESERVAS E OCUPACAO DE QUARTOS   \n");
  printf("================================================================\n");
  printf("                     Relatorio de Reservas  \n");
  printf("================================================================\n");

  for(int r = 0; r < this->reservas.size(); r++){
    Reserva reserva;
    reserva = getReserva(reservas[r].getId());
    
    Quarto quarto;
    quarto = getQuarto(reservas[r].getQuarto());

    Cliente cliente;
    cliente = getCliente(reservas[r].getCliente());
    cout << " Id: [" << reservas[r].getId() << "]" << "\n";
    cout << " | Cliente: " << "\n";
    cout << " |       Nome.....:" << cliente.getNome() << "\n";
    cout << " |       Endereco.: " << cliente.getEndereco()  << "\n";
    cout << " |       Telefone: " << cliente.getTelefone() << "\n";
    cout << " |       Estado: " << cliente.getEstado() << "\n";
    cout << " | Quarto: " << "\n";
    cout << " |       Tipo............ :" << quarto.getTipo() << "\n";
    cout << " |       Camas............: " << quarto.getCamas() << "\n";
    cout << " |       Tipo Camas.......: " << quarto.getTipoCamas() << "\n";
    cout << " |       Valor Diaria R$..: " << quarto.getValorDiaria() << "\n";
    cout << " | Data Inicial..: " << reservas[r].getDataInicial() << "\n";
    cout << " | Data Final....: " << reservas[r].getDataFinal() << "\n";
    cout << " ------------------------------------------------------ " << "\n";
  }
}

Quarto ListaHotel::getQuarto(int cod_quarto){
  Quarto quarto;
  for(int q = 0; q <= quartos.size(); q++){
    if(quartos[q].getId()==cod_quarto){
      quarto = quartos[q];
      return quarto;
    }
  }
  return quarto;
}

Cliente ListaHotel::getCliente(int cod_cliente){
  Cliente cliente;
  for(int q = 0; q <= clientes.size(); q++){
    if(clientes[q].getId()==cod_cliente){
      cliente = clientes[q];
      return cliente;
    }
  }
  return cliente;
}

Reserva ListaHotel::getReserva(int cod_reserva){
  Reserva reserva;
  for(int q = 0; q <= reservas.size(); q++){
    if(reservas[q].getId()==cod_reserva){
      reserva = reservas[q];
      return reserva;
    }
  }
  return reserva;
}

Hotel ListaHotel::getHotel(int id) {
    for (int i = 0; i < hoteis.size(); i++)
    {
        if (hoteis[i].getId() == id) {
            return hoteis[i];
        }
    }
}

