#include <string>
#include <iostream>
#include "../include/itemPedido.h"

itemPedido::itemPedido(int quantidade, float precoVenda){
    this->quantidade = quantidade;
    this->precoVenda = precoVenda;
}

itemPedido::~itemPedido(){
    
}

int itemPedido::getQuantidade() {
		return this->quantidade;
	}

void itemPedido::setQuantidade(int quantidade) {
    this->quantidade = quantidade;
}

float itemPedido::getPrecoVenda() {
    return this->precoVenda;
}

void itemPedido::setPrecoVenda(float precoVenda) {
    this->precoVenda = precoVenda;
}
