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
        ItemPedido(int quantidade, Produto *podruto);
        ~ItemPedido();
        //
        //Getters e Setters
		int getQuantidade();
		void setQuantidade(int quantidade);
		float getPrecoVenda();
		void setPrecoVenda(float precoVenda);
        void addItem();
        void delItem();
        void setProduto(Produto *produto);
        Produto *getProduto();
        void attPrecoVenda();
        void printItem();
        //

};


#endif