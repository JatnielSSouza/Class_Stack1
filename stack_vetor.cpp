/*
    Implementação de uma pilha como vetor
*/
#include "stack.h"
#include <iostream>
using namespace std;

Stack::Stack() // Construtor:
{
    length = 0;
    structure = new ItemType[MAX_ITEMS];
}

Stack::~Stack() // Desconstrutor
{
    delete[] structure;
}

// Métodos públicos:

// Verificação:
bool Stack::isEmpty() const
{
    return (length == 0);
}

bool Stack::isFull() const
{
    return (length == MAX_ITEMS);
}

// Método push (inserção):
void Stack::push(ItemType item)
{
    if (!isFull())
    {
        structure[length] = item;
        length++;
    }
    else
    {
        throw "Stack is already full!"; // Lançamento de erro para ser tratado posteriormente por uma try_catch por exemplo.
    }
}

// Método pop (remoção):
ItemType Stack::pop()
{
    if (!isEmpty())
    {
        ItemType aux = structure[length - 1];
        length--;
        return aux;
    }
    else
    {
        throw "Stack is empty!"; // Lançamento de erro para ser tratado posteriormente por uma try_catch por exemplo.
    }
}

// Método print (impressão da pilha como vetor):
void Stack::print() const
{
    cout << "Pilha = ";
    for (int i = 0; i < length; i++)
    {
        cout << structure[i];
    }
    cout << "\n";
}