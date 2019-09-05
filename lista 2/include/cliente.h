#include <string>
#include <iostream>
#include "ctime"
#include "pessoa.h"
#include "pedido.h"
#ifndef _CLIENTE_H
#define _CLIENTE_H

using namespace std;

class Cliente:public Pessoa{
    private:
        Pedido *pedido;
    public:
        Cliente(string nome, tm dataNascimento, string RG, string CPF, 
        string endereco, string telefone, string email);
        ~Cliente();
        void setPedido(Pedido *pedido);
        Pedido *getPedido();
};

#endif