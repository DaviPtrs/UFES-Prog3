#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Pessoa{
    private:
        string nome;
        string tel;

    public:
        Pessoa(string n1, string n2){
            this->nome = n1;
            this->tel = n2;
            cout << "Construindo pessoa " << this->nome << endl; 
        }
        ~Pessoa(){
            cout << "Destruindo pessoa " << this->nome << endl;
        }

        void imprimeNome(){
            cout << "Nome: " << this->nome << endl;
        }
        
        void imprimeTel(){
            cout << "Telefone: " << this->tel << endl;
        }
};

int main(int argc, char const *argv[])
{
    vector<Pessoa *> pessoas;

    for(int i = 0; i < 3; i++){
        string n, t;
        cout << "Digite um nome: ";
        cin >> n;
        cout << "Digite um telefone: ";
        cin >> t;
        pessoas.push_back(new Pessoa(n,t));
    }

    for(int i = 0; i < 3; i++){
        Pessoa *p = pessoas[i];
        p->imprimeNome();
        p->imprimeTel();
        delete p;
    }
    return 0;
}
