// LinkedLists.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>


void PrintRecursiveCreatedLL()
{
    auto recursiveCreatedLL = new RecursiveCreateLinkedList();

    recursiveCreatedLL->Append(3);
    recursiveCreatedLL->Append(4);
    recursiveCreatedLL->Append(5);
    recursiveCreatedLL->Append(6);
    std::cout << "This is the recursively created linked list : " << recursiveCreatedLL->GetPrintedList();
    cout << endl << endl;
}


int main()
{
    PrintRecursiveCreatedLL();
}

