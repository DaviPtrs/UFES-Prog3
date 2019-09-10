#include <string>
#include <iostream>
#include "../include/itemPedido.h"

using namespace std;

ItemPedido::ItemPedido(int quantidade, Produto *podruto){
    this->quantidade = quantidade;
    this->produto = podruto;
    this->attPrecoVenda();

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

void ItemPedido::addItem(){
    this->quantidade++;
    this->attPrecoVenda();
}

void ItemPedido::delItem(){
    this->quantidade--;
    this->attPrecoVenda();
}

void ItemPedido::setProduto(Produto *produto){
    this->produto = produto;
}
Produto *ItemPedido::getProduto(){
    return this->produto;
}

void ItemPedido::attPrecoVenda(){
    this->precoVenda = this->produto->getPrecoBase() * this->quantidade;
}

//parei aqui
// void ItemPedido::printItem(){
//     cout << "Codigo: " << this->produto->getCodigo() << endl;
//     cout << "Nome: " << this->produto->getNome() << endl;

// }