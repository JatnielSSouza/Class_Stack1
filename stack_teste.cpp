#include "stack.h"
#include <iostream>
using namespace std;

int main()
{
    ItemType character;
    Stack stack;
    ItemType stackItem;

    cout << "Escreva uma string: \n";
    cin.get(character);

    while (character != '\n')
    {
        stack.push(character);
        cin.get(character);
    }

    while (!stack.isEmpty())
    {
        stackItem = stack.pop();
        cout << stackItem;
    }
    cout << endl;
}