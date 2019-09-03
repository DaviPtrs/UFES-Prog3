#include <string>
#include <iostream>
#include "../include/produto.h"

int Produto::qtdProdutos = 0;

Produto::Produto(int codigo, string nome, string descricao, int quantidadeEstoque, float precoBase){
    
    this->codigo = codigo;
    this->nome = nome;
    this->descricao = descricao;
    this->quantidadeEstoque = quantidadeEstoque;
    this->precoBase = precoBase;
    qtdProdutos++;
    std::cout << "Produto " << this->nome << "(id.: " << this->codigo << ") criado." << endl;
}

Produto::~Produto(){
    std::cout << "Produto " << this->nome << "(id.: " << this->codigo << ") destruido." << endl;
    qtdProdutos--;
}

int Produto::getCodigo() {
    return this->codigo;
}

void Produto::setCodigo(int codigo) {
    this->codigo = codigo;
}

string Produto::getNome() {
    return this->nome;
}

void Produto::setNome(string nome) {
    this->nome = nome;
}

string Produto::getDescricao() {
    return this->descricao;
}

void Produto::setDescricao(string descricao) {
    this->descricao = descricao;
}

int Produto::getQuantidadeEstoque() {
    return this->quantidadeEstoque;
}

void Produto::setQuantidadeEstoque(int quantidadeEstoque) {
    this->quantidadeEstoque = quantidadeEstoque;
}

float Produto::getPrecoBase() {
    return this->precoBase;
}

void Produto::setPrecoBase(float precoBase) {
    this->precoBase = precoBase;
}