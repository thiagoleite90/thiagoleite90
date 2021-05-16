/* Integrantes do grupo:
-   Rafael Marques Scott
-   Tiago de Oliveira Schulz
-   Thiago dos Santos Leite
*/

#include "ListaHotel.hpp"
#include "ListaCliente.hpp"
#include "Cliente.hpp"
#include <iostream>
#include <stdlib.h>

ListaHotel listaHotel;

int main() {
  int opcaoSubMenu = -1;

  while(opcaoSubMenu != 0){
    //system("clear");
    printf("\n\n================================================================\n");
    printf("            SISTEMA DE RESERVAS E OCUPACAO DE QUARTOS   \n");
    printf("================================================================\n");
    printf("                       GERENCIAR HOTEL \n");
    printf("================================================================\n");  
    printf("(1) - Adicionar Hotel \n");
    printf("(2) - Adicionar Funcionario \n");
    printf("(3) - Adicionar Quarto \n");
    printf("(4) - Lista Hotel \n");

    printf("(5) - Adicionar Cliente \n");
    printf("(6) - Alterar Cliente \n");
    printf("(7) - Lista de Clientes \n");

    printf("(8) - Reservar Quarto \n");
    printf("(9) - Relatorio de Reservas \n");

    printf("(0) - Voltar ao Menu Principal \n");
    printf("Digite sua opcao: ");
    cin >> opcaoSubMenu;

    if(opcaoSubMenu==1){
        listaHotel.adicionaHotel();
    }
    else if (opcaoSubMenu == 2) {
        listaHotel.adicionaFuncionario(listaHotel);
    }
    else if (opcaoSubMenu == 3) {
        listaHotel.adicionaQuarto(listaHotel);
    }
    else if (opcaoSubMenu == 4) {
        listaHotel.listaHotel();
    }
    else if (opcaoSubMenu == 5) {
        listaHotel.adicionaCliente();
    }
    else if (opcaoSubMenu == 6) {
        listaHotel.alterarCliente();
    }
    else if (opcaoSubMenu == 7) {
        listaHotel.listaClientes();
    }
    else if (opcaoSubMenu == 8) {
        listaHotel.reservarQuarto(listaHotel);
    }
    else if (opcaoSubMenu == 9) {
        listaHotel.relatorioReservas();
    }else if(opcaoSubMenu==0){
      return 0;

    }else{
      cout << "OPCAO INVALIDA! ";
    }
  }

  return 0;
}
