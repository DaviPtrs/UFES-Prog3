#include <string>
#include <iostream>
#ifndef _PRODUTO_H
#define _PRODUTO_H

using namespace std;

class Produto{
    private:
        int codigo;
        string nome;
        string descricao;
        int quantidadeEstoque;
        float precoBase;
    public:
        static int qtdProdutos;
        //Construtor e destrutor
        Produto(int codigo, string nome, string descricao, int quantidadeEstoque, float precoBase);
        ~Produto();
        //
        //Getters e Setters
        int getCodigo();
        void setCodigo(int codigo);
        string getNome();
        void setNome(string nome);
        string getDescricao();
        void setDescricao(string descricao);
        int getQuantidadeEstoque();
        void setQuantidadeEstoque(int quantidadeEstoque);
        float getPrecoBase();
        void setPrecoBase(float precoBase);
        int getQtdProdutos();
        void setQtdProdutos(int qtdProdutos);
        //

};


#endif