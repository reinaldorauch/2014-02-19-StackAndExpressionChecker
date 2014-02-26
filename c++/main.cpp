#include <iostream>

#include "stack.cpp"

#define LIM 5

using namespace std;

void getFromStdin(Stack *pilha) {

    int val;
    char op;

    cout << "Digite um valor:\n";

    cin >> val;

    pilha->push(val);

    cout << "Continuar?";

    cin >> op;

    if(op == 's')
        getFromStdin(pilha);
    else
        return;

}

int main()
{
	Stack pilha;

	cout << "Programa teste da classe pilha\n";

	cout << "Digite os valores para popular a pilha:\n";

    getFromStdin(&pilha);

    cout << "Ultimo elemento da pilha:\n" << pilha.getTopVal() << "\n\n";

    cout << "Imprimindo a pilha:\n";

    pilha.printStack();

    cout << "Retirando elemento da pilha e mostrando o último elemento novamente:\n";

    pilha.pop();

    if(pilha.isEmpty())
        cout << "Pilha vazia\n\n";
    else
        cout << pilha.getTopVal() << "\n\n";

    cout << "Pilha vazia? " << (pilha.isEmpty() ? "Sim" : "Não") << "\n";

    cout << "Retirando todos os elementos da pilha...\n\n";

    while(!pilha.isEmpty())
        pilha.pop();

    cout << "Pilha vazia? " << (pilha.isEmpty() ? "Sim" : "Não") << "\n";



	return 0;
}