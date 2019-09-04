#include <string>
#include <iostream>
#ifndef _ITEM_PEDIDO_H
#define _ITEM_PEDIDO_H
#include "produto.h"

using namespace std;

class itemPedido{
    private:
        int quantidade;
        float precoVenda;
        Produto *produto;

    public:
        static int qtdProdutos;
        //Construtor e destrutor
        itemPedido(int quantidade, float precoVenda, Produto *podruto);
        ~itemPedido();
        //
        //Getters e Setters
		int getQuantidade();
		void setQuantidade(int quantidade);
		float getPrecoVenda();
		void setPrecoVenda(float precoVenda);
        //

};


#endif