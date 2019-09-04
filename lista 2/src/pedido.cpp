#include <string>
#include <iostream>
#include "../include/pedido.h"

using namespace std;

// ItemPedido::ItemPedido(int quantidade, float precoVenda, Produto *podruto){
//     this->quantidade = quantidade;
//     this->precoVenda = precoVenda;
//     this->produto = podruto;

//     cout << "Pedido criado! Item: " << podruto->getNome() 
//     << "(id.: " << podruto->getCodigo() << ")" << endl <<
//     "Quantidade: " << quantidade << endl 
//     << "Valor de venda: " << precoVenda << endl;
// }

// ItemPedido::~ItemPedido(){
//     cout << "Pedido Deletado! Item: " << this->produto->getNome() 
//     << "(id.: " << this->produto->getCodigo() << ")" << endl;
// }

float Pedido::getValorTotal() {
    return this->valorTotal;
}

void Pedido::setValorTotal(float valorTotal) {
    this->valorTotal = valorTotal;
}

tm Pedido::getData() {
    return this->data;
}

void Pedido::setData(tm data) {
    this->data = data;
}

string Pedido::getStatus() {
    return this->status;
}

void Pedido::setStatus(string status) {
    this->status = status;
}

string Pedido::getFormaPgto() {
    return this->formaPgto;
}

void Pedido::setFormaPgto(string formaPgto) {
    this->formaPgto = formaPgto;
}

void Pedido::addItemPedido(ItemPedido *itemPedido){
    this->items.push_back(itemPedido);
}

void Pedido::delItemPedido(int codigo){
//falta terminar essa função
}