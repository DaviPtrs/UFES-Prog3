#include <iostream>
#include <vector>
#include "include/itemPedido.h"
// #include "include/funcionario.h"

using namespace std;

void limpaArray(int *x){
    for(int i = 0; i < x.size(); i++){
        x[i] = -1;
    }
}

int main(){
    vector<Produto *> produtos; 
    vector<Funcionario *> funcionarios; 
    vector<Cliente *> clientes; 
    

    produtos.push_back(new Produto(0, "PS4", "Videogame", 5, 999.90));
    produtos.push_back(new Produto(1, "Xbox One", "Videogame", 5, 1299.99));
    produtos.push_back(new Produto(2, "TV", "Eletrodoméstico", 0, 5000));

    funcionarios.push_back(new Funcionario("Davi", {0,0,0,19,11,1999}, "321", "321", "321", "321", "321", "321"));
    funcionarios.push_back(new Funcionario("Débora", {0,0,0,13,5,1700}, "321", "321", "321", "321", "321", "321"));
    funcionarios.push_back(new Funcionario("Jairo", {0,0,0,25,12,1995}, "321", "321", "321", "321", "321", "321"));

    clientes.push_back(new Cliente("Azulejos", {0,0,0,25,12,1995}, "321", "321", "321", "321", "321"));
    clientes.push_back(new Cliente("Barulhos", {0,0,0,25,12,1995}, "321", "321", "321", "321", "321"));
    clientes.push_back(new Cliente("Galo de Kalsa", {0,0,0,25,12,1995}, "321", "321", "321", "321", "321"));
    
    
    

    for(int i = 0; i < produtos.size(); i++){
        delete produtos[i];
    }
    for(int i = 0; i < funcionarios.size(); i++){
        delete funcionarios[i];
    }
    return 0;
}
