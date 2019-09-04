#include <iostream>
#include <vector>
#include "include/produto.h"

using namespace std;

int main(){
    vector<Produto *> produtos;
    produtos.push_back(new Produto(0, "PS4", "Videogame", 5, 999.90));
    produtos.push_back(new Produto(1, "Xbox One", "Videogame", 5, 1299.99));

    for(int i = 0; i < produtos.size(); i++){
        delete produtos[i];
    }

    return 0;
}