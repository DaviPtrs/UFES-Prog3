#include <string>
#include <iostream>
#ifndef _PEDIDO_H
#define _PEDIDO_H
#include <ctime>
#include "itemPedido.h"

using namespace std;

class Pedido{
    private:
        float valorTotal;
        tm data;
        string status;
        string formaPgto;
        vector<ItemPedido *> items;


    public:
        //Construtor e destrutor
        Pedido(int quantidade, float precoVenda, Produto *podruto);
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
        void delItemPedido(int codigo);
        //

};


#endif