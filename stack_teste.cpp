#include "stack.h"
#include <iostream>
using namespace std;

int main()
{
    ItemType character;
    Stack stack;
    ItemType stackItem;

    cout << endl;
    cout << "Escreva uma string: \n";
    cin.get(character);

    while (character != '\n')
    {
        stack.push(character);
        cin.get(character);
    }

    cout << "\nA pilha como vetor e: \n";
    stack.print();

    cout << "\nRemocao atraves do metodo pop(): \n";
    while (!stack.isEmpty())
    {
        stackItem = stack.pop();
        cout << stackItem;
    }
    cout << "\n\n";
}