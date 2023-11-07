#include <iostream>
#include <list>
#include <string>
 
using namespace std;
 
class Fila {
    
    private:
        list<string> lista;
    public:
        Fila(){}
        void enfileirar(string nome){
            lista.push_back(nome);
        }
        string desenfileirar(){
            if(lista.empty()){
                return "";
            }
            string nome = lista.front();
            lista.pop_front();
            return nome;
        }
        bool vazia(){
            return lista.empty();
        }
        void mostrarElementosFila(){
            for(auto i: lista){
                cout << "Nome: " << i << endl;
            }
        }
};
 
int main() {
 
    Fila fila;
    fila.enfileirar("Aposentado1");
    fila.enfileirar("Aposentado2");
    fila.enfileirar("Aposentado3");
    fila.enfileirar("Aposentado4");
    fila.enfileirar("Aposentado5");
    fila.enfileirar("Aposentado6");
    fila.enfileirar("Aposentado7");
    fila.enfileirar("Aposentado8");
    fila.enfileirar("Aposentado9");
    fila.enfileirar("Aposentado10");
    fila.desenfileirar();
    fila.desenfileirar();
    fila.desenfileirar();
    fila.desenfileirar();
    fila.desenfileirar();
    fila.enfileirar("Aposentado11");
    fila.enfileirar("Aposentado12");
    fila.enfileirar("Aposentado13");
    fila.enfileirar("Aposentado14");
    fila.mostrarElementosFila();
 
    return 0;
}
