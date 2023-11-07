#include <iostream>
#include <list>
#include <string>
 
using namespace std;
 
class Fila {
    public:
        Fila(){}
        void enfileirar(string nome, int idade){
            lista.push_back(nome);
            idades.push_back(idade);
            if(idade > 60){
            	filaPreferencial.push_back(nome);
    		}
    		if(idade <= 60){
            	filaNormal.push_back(nome);
    		}
        }
        
        void desenfileirar(){
            string nome = lista.front();
            lista.pop_front();
            int idade = idades.front();
            idades.pop_front();
        }
        bool vazia(){
            return lista.empty();
        }
        void mostrarElementosFila(){
            for(auto i: lista){
                cout << "Nome: " << i << endl;
            }
            cout << endl;
        }
        void mostrarElementosFilaOrdenada(){
            for(auto i: filaPreferencial){
                cout << "Nome: " << i << endl;
            }
            for(auto j: filaNormal){
                cout << "Nome: " << j << endl;
            }
            cout << endl;
        }
    private:
        list<string> lista;
        list<string> filaPreferencial;
        list<string> filaNormal;
        list<int> idades;
};
 
int main() {
 
    Fila fila;
    fila.enfileirar("Carlos", 70);
    fila.enfileirar("Alberto", 14);
    fila.enfileirar("Rosangela", 23);
    fila.enfileirar("Jose", 38);
    fila.enfileirar("Daniel", 87);
    fila.enfileirar("Roberto", 49);
    fila.enfileirar("Aurora", 22);
    fila.enfileirar("Marcos", 55);
    fila.enfileirar("Adilson", 75);
    fila.enfileirar("Luiz", 45);
    fila.enfileirar("Irene", 35);
    fila.enfileirar("Maria", 37);
    fila.enfileirar("Orlando", 67);
    fila.enfileirar("Rosalina", 42);
    fila.enfileirar("Angela", 38);
    fila.mostrarElementosFila();
    fila.mostrarElementosFilaOrdenada();

    for(int i = 0; i < 15; i ++){
        fila.desenfileirar();
    }
    
    fila.mostrarElementosFila();
 
    return 0;
}