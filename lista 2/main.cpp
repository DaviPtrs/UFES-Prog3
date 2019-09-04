#include <iostream>
#include <vector>
#include "include/itemPedido.h"

using namespace std;

int main(){
    vector<Produto *> produtos;
    vector<ItemPedido *> pedidos;
    produtos.push_back(new Produto(0, "PS4", "Videogame", 5, 999.90));
    produtos.push_back(new Produto(1, "Xbox One", "Videogame", 5, 1299.99));

    for(int i = 0; i < produtos.size(); i++){
        pedidos.push_back(new ItemPedido(2, 3000, produtos[i]));
    }

    for(int i = 0; i < pedidos.size(); i++){
        delete pedidos[i];
    }

    for(int i = 0; i < produtos.size(); i++){
        delete produtos[i];
    }

    return 0;
}