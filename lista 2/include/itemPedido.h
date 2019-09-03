#include <string>
#include <iostream>
#ifndef _ITEM_PEDIDO_H
#define _ITEM_PEDIDO_H

using namespace std;

class itemPedido{
    private:
        int quantidade;
        float precoVenda;

    public:
        static int qtdProdutos;
        //Construtor e destrutor
        itemPedido(int quantidade, float precoVenda);
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