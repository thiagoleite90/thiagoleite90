#ifndef ListaHotel_hpp
#define ListaHotel_hpp

#include "Hotel.hpp"
#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Reserva.hpp"
#include "Quarto.hpp"
#include <vector>

class ListaHotel
{
    public:
        void listaHotel();
        void adicionaHotel();
        void adicionaFuncionario(ListaHotel listaHotel);
        void adicionaQuarto(ListaHotel listaHotel);
        void reservarQuarto(ListaHotel listaHotel);
        void consultarHotel();

        void listaQuartos();
        void adicionaCliente();
        void listaClientes();
        void alterarCliente();

        Quarto getQuarto(int cod_quarto);
        Cliente getCliente(int cod_cliente);
        Reserva getReserva(int cod_reserva);

        void relatorioReservas(); 

        vector<Funcionario> getFuncionarios();
        Hotel getHotel(int id);

    private:
        vector<Hotel> hoteis;
        vector<Funcionario> funcionarios;
        vector<Quarto> quartos;
        vector<Reserva> reservas;
        vector<Cliente> clientes;
        int static ultimoId;
};

#endif
