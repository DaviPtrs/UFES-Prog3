#include <string>
#include <iostream>
#include "ctime"
#include "pessoa.h"
#ifndef _FUNCIONARIO_H
#define _FUNCIONARIO_H

using namespace std;

class Funcionario:public Pessoa{
    private:
        string matricula;
    public:
        Funcionario(string nome, tm dataNascimento, string RG, string CPF, 
        string endereco, string telefone, string email, string matricula);
        ~Funcionario();
        void setMatricula(string matricula);
        string getMatricula();
};

#endif