#include <string>
#include <iostream>
#ifndef _ITEM_PEDIDO_H
#define _ITEM_PEDIDO_H
#include "produto.h"

using namespace std;

class ItemPedido{
    private:
        int quantidade;
        float precoVenda;
        Produto *produto;

    public:
        //Construtor e destrutor
        ItemPedido(int quantidade, float precoVenda, Produto *podruto);
        ~ItemPedido();
        //
        //Getters e Setters
		int getQuantidade();
		void setQuantidade(int quantidade);
		float getPrecoVenda();
		void setPrecoVenda(float precoVenda);
        void addItem(Produto *produto);
        void delItem(Produto *produto);
        int getCodigoItem();
        //

};


#endif