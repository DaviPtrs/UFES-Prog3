#include <string>
#include <iostream>
#include <ctime>
#include "../include/pedido.h"

using namespace std;

int Pedido::qtdPedidos = 0;

Pedido::Pedido(vector <ItemPedido *> items, Funcionario *funcionario, int valorTotal, string formaPgto){
    time_t dataSegs;
    time(&dataSegs);
    this->data = *localtime(&dataSegs);
    this->valorTotal = valorTotal;
    this->status = "Registrado";
    this->formaPgto = formaPgto;
    this->items = items;
    this->funcionario = funcionario;
    qtdPedidos++;

    //fazer uma mensagem de criacao do pedido

    // cout << "Pedido criado! Item: " << podruto->getNome() 
    // << "(id.: " << podruto->getCodigo() << ")" << endl <<
    // "Quantidade: " << quantidade << endl 
    // << "Valor de venda: " << precoVenda << endl;
}

Pedido::~Pedido(){
    qtdPedidos--;
}

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

void Pedido::rmItemPedido(int codigo){
    vector <ItemPedido *> x;
    x = this->items;

    for(int i = 0; i < x.size(); i++){
        if(x[i]->getProduto()->getCodigo() == codigo){
            x.erase(x.begin() + i);
        }
    }
}

void Pedido::setFuncionario(Funcionario *funcionario){
    this->funcionario = funcionario;
}
Funcionario *Pedido::getFuncionario(){
    return this->funcionario;
}

void Pedido::Pago(){
    vector <ItemPedido *> x;
    x = this->items;
    for(int i = 0; i < x.size(); i++){
        if(x[i]->getProduto()->getQuantidadeEstoque() > 0){
            this->setStatus("Pago");
        }else{
            this->setStatus("Aguardando estoque");
        }
    }
}

void Pedido::Pago(){
    this->setStatus("Atendido");
}
