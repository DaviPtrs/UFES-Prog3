#include <string>
#include <iostream>
#include "../include/itemPedido.h"

using namespace std;

itemPedido::itemPedido(int quantidade, float precoVenda, Produto *podruto){
    this->quantidade = quantidade;
    this->precoVenda = precoVenda;
    this->produto = podruto;

    cout << "Pedido criado! Item: " << podruto->getNome() 
    << "(id.: " << podruto->getCodigo() << ")" << endl <<
    "Quantidade: " << quantidade << endl 
    << "Valor de venda: " << precoVenda << endl;
}

itemPedido::~itemPedido(){
    cout << "Pedido Deletado! Item: " << this->produto->getNome() 
    << "(id.: " << this->produto->getCodigo() << ")" << endl;
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
