#include <string>
#include <iostream>
#include <ctime>
#ifndef _PESSOA_H
#define _PESSOA_H

using namespace std;

class Pessoa{
    protected:
        string nome;
        tm dataNascimento;
        string RG;
        string CPF;
        string endereco;
        string telefone;
        string email;
    public:
        //Construtor e destrutor
        Pessoa();
        ~Pessoa();
        //
        //Getters e Setters
        string getNome();
        void setNome(string nome);
        tm getDataNascimento();
        void setDataNascimento(tm dataNascimento);
        string getRG();
        void setRG(string RG);
        string getCPF();
        void setCPF(string CPF);
        string getEndereco();
        void setEndereco(string endereco);
        string getTelefone();
        void setTelefone(string telefone);
        string getEmail();
        void setEmail(string email);
        //
};


#endif