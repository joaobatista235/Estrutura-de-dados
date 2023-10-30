#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    stack<string> pilha1;
    stack<string> pilha2;

    pilha1.push("Manga");
    pilha1.push("Uva");
    pilha1.push("Banana");
    pilha1.push("Maçã");
    pilha1.push("Pera");
    pilha1.push("Laranja");
    
    pilha2.push("Abacate");
    pilha2.push("Mamão");
    pilha2.push("Melancia");
    pilha2.push("Kiwi");
    pilha2.push("Morango");
    pilha2.push("Abacaxi");
    
    pilha1.pop();
    pilha1.pop();

    pilha2.push("Uva");
    pilha2.push("Manga");

    pilha2.pop();
    pilha2.pop();

    pilha1.push("Morango");
    pilha1.push("Abacaxi");

    cout << "Pilha 1:" << endl;
    while (!pilha1.empty()) {
        cout << pilha1.top() << endl;
        pilha1.pop();
    }

    cout << "Pilha 2:" << endl;
    while (!pilha2.empty()) {
        cout << pilha2.top() << endl;
        pilha2.pop();
    }

    return 0;
}
