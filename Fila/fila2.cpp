#include <iostream>
#include <list>
#include <string>
 
using namespace std;
 
 class Paciente{
    private:
        string nome;
        int idade;
        
    public:
        
        Paciente(string nome, int idade){
            this->nome = nome;
            this->idade = idade;
        }
        
        string getNome(){
            return this->nome;
        }
        
        int getIdade(){
            return this->idade;
        }
    
};
 
class Fila {
    public:
        Fila(){}
        
        void enfileirar(Paciente paciente){
            pacientes.push_back(paciente);
            
            if(paciente.getIdade() > 60){
                filaPreferencial.push_back(paciente);   
            }else{
                pacientesNaoPreferenciais.push_back(paciente);
            }
   
        }
        
        void mostrarFilaAtendimentoSemRegra(){
            for(auto paciente: pacientes){
                cout << "Paciente: " << paciente.getNome() << " tem " << paciente.getIdade() << " anos." << endl;
            }
        }
        
        void mostrarFilaPreferencial(){
            for(auto paciente: filaPreferencial){
                cout << "Fila preferencial: " << paciente.getNome() <<
                " tem " << paciente.getIdade() << " anos." << endl;
            }
        }
        
        void mostrarFilaNaoPreferencial(){
            for(auto paciente: pacientesNaoPreferenciais){
                cout << "Fila não preferencial: " << paciente.getNome() <<
                " tem " << paciente.getIdade() << " anos." << endl;
            }
        }
        
        void mostrarFilaComRegra(){
            mostrarFilaPreferencial();
            mostrarFilaNaoPreferencial();
        }

    private:
        list<Paciente> pacientesNaoPreferenciais;
        list<Paciente> filaPreferencial;
        list<Paciente> pacientes;
};
 

 
int main() {
 
    Fila ordemAtendimento;
   
    ordemAtendimento.enfileirar(Paciente("Carlos", 70));
    ordemAtendimento.enfileirar(Paciente("Alberto", 14));
    ordemAtendimento.enfileirar(Paciente("Rosangela", 23));
    ordemAtendimento.enfileirar(Paciente("Jose", 38));
    ordemAtendimento.enfileirar(Paciente("Daniel", 87));
    ordemAtendimento.enfileirar(Paciente("Roberto", 49));
    ordemAtendimento.enfileirar(Paciente("Aurora", 22));
    ordemAtendimento.enfileirar(Paciente("Marcos", 55));
    ordemAtendimento.enfileirar(Paciente("Adilson", 75));
    ordemAtendimento.enfileirar(Paciente("Luiz", 45));
    ordemAtendimento.enfileirar(Paciente("Irene", 35));
    ordemAtendimento.enfileirar(Paciente("Maria", 37));
    ordemAtendimento.enfileirar(Paciente("Orlando", 67));
    ordemAtendimento.enfileirar(Paciente("Rosalina", 42));
    ordemAtendimento.enfileirar(Paciente("Angela", 38));
   
   cout << "Fila com todos os pacientes ------------------" << endl;
   ordemAtendimento.mostrarFilaAtendimentoSemRegra();
   cout << "----------------------------------------------" << endl;
   
   cout << "Fila organizada com pacientes preferenciais" << endl;
   ordemAtendimento.mostrarFilaComRegra();

    return 0;
}