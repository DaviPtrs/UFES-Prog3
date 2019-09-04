#include <string>
#include <iostream>
#include "../include/ItemPedido.h"

using namespace std;

ItemPedido::ItemPedido(int quantidade, float precoVenda, Produto *podruto){
    this->quantidade = quantidade;
    this->precoVenda = precoVenda;
    this->produto = podruto;

    cout << "Pedido criado! Item: " << podruto->getNome() 
    << "(id.: " << podruto->getCodigo() << ")" << endl <<
    "Quantidade: " << quantidade << endl 
    << "Valor de venda: " << precoVenda << endl;
}

ItemPedido::~ItemPedido(){
    cout << "Pedido Deletado! Item: " << this->produto->getNome() 
    << "(id.: " << this->produto->getCodigo() << ")" << endl;
}

int ItemPedido::getQuantidade() {
		return this->quantidade;
}

void ItemPedido::setQuantidade(int quantidade) {
    this->quantidade = quantidade;
}

float ItemPedido::getPrecoVenda() {
    return this->precoVenda;
}

void ItemPedido::setPrecoVenda(float precoVenda) {
    this->precoVenda = precoVenda;
}

void ItemPedido::addItem(Produto *produto){
    this->quantidade++;
}

void ItemPedido::delItem(Produto *produto){
    this->quantidade--;
}

int ItemPedido::getCodigoItem(){
    return this->produto->getCodigo();
}