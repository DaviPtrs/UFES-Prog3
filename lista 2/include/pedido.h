#include <string>
#include <iostream>
#include <vector>
#include <ctime>
#include "funcionario.h"
#ifndef _PEDIDO_H
#define _PEDIDO_H
#include "itemPedido.h"  

using namespace std;

class Pedido{
    private:
        float valorTotal;
        tm data;
        string status;
        string formaPgto;
        vector <ItemPedido *> items;
        Funcionario *funcionario;
        
    public:
        static int qtdPedidos;
        //Construtor e destrutor
        Pedido(vector <ItemPedido *> items, Funcionario *funcionario, int valorTotal, string formaPgto);
        ~Pedido();
        //
        //Getters e Setters
		float getValorTotal();
        void setValorTotal(float valorTotal);
        tm getData();
        void setData(tm data);
        string getStatus();
        void setStatus(string status);
        string getFormaPgto();
        void setFormaPgto(string formaPgto);
        void addItemPedido(ItemPedido *itemPedido);
        void rmItemPedido(int codigo);
        void setFuncionario(Funcionario *funcionario);
        Funcionario *getFuncionario();
        void Pago();
        void Entregue();
        //
};

#endif