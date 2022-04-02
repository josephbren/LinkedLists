// LinkedLists.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>


RecursiveCreateLinkedList* CreateLinkedList()
{
    auto recursiveCreatedLL = new RecursiveCreateLinkedList();

    recursiveCreatedLL->Append(3);
    recursiveCreatedLL->Append(4);
    recursiveCreatedLL->Append(5);
    recursiveCreatedLL->Append(6);

    return recursiveCreatedLL;
}


void PrintRecursiveCreatedLL()
{
    auto recursiveCreatedLL = CreateLinkedList();
    if (recursiveCreatedLL)
    {
        std::cout << "This is the recursively created linked list: " << recursiveCreatedLL->GetPrintedList();
        cout << endl << endl;
    }
}


void PrintReversedLL()
{
    auto recursiveCreatedLL = CreateLinkedList();
    if (recursiveCreatedLL)
    {
        LLNode* newHead = ReverseLinkedList(recursiveCreatedLL->GetHead());
        recursiveCreatedLL->SetHead(newHead);

        std::cout << "The reversed linked list is: " << recursiveCreatedLL->GetPrintedList();
        cout << endl << endl;
    }
}


int main()
{
    PrintRecursiveCreatedLL();
    PrintReversedLL();
}

