#include <string>
#include <iostream>
#include <ctime>
#include "../include/cliente.h"
Cliente::Cliente(string nome, tm dataNascimento, string RG, 
    string CPF, string endereco, string telefone, string email)
{
    this->nome = nome;
    this->dataNascimento = dataNascimento;
    this->RG = RG;
    this->CPF = CPF;
    this->endereco = endereco;
    this->telefone = telefone;
    this->email = email;

    cout << "Cliente " << this->nome << "criado!" << endl;
}

Cliente::~Cliente(){
    cout << "Cliente " << this->nome << "deletado!" << endl;
}

void Cliente::setPedido(Pedido *pedido){
    this->pedido = pedido;
}
Pedido *Cliente::getPedido(){
    return this->pedido;
}