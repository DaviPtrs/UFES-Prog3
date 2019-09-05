#include <string>
#include <iostream>
#include <ctime>
#include "../include/funcionario.h"
// #include "../include/pessoa.h"

Funcionario::Funcionario(string nome, tm dataNascimento, string RG, string CPF, 
    string endereco, string telefone, string email, string matricula)
{
    this->nome = nome;
    this->dataNascimento = dataNascimento;
    this->RG = RG;
    this->CPF = CPF;
    this->endereco = endereco;
    this->telefone = telefone;
    this->email = email;
    this->matricula = matricula;

    cout << "Funcionario " << this->nome << " (" << this->matricula << ") criado!" << endl;
}

Funcionario::~Funcionario(){
    cout << "Funcionario " << this->nome << " (" << this->matricula << ") deletado!" << endl;
}

void Funcionario::setMatricula(string matricula){
    this->matricula = matricula;
}

string Funcionario::getMatricula(){
    return this->matricula;
}