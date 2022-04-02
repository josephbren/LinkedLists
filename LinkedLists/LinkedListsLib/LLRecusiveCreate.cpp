#include "pch.h"


RecursiveCreateLinkedList::RecursiveCreateLinkedList()
{
	_head = nullptr;
}


void RecursiveCreateLinkedList::Append(int data)
{
	if (!_head)
	{
		_head = new LLNode(data);
	}
	else
	{
		_Append(data, _head);
	}
}


string RecursiveCreateLinkedList::GetPrintedList()
{
	string printedList;

	LLNode* current = _head;
	while (current)
	{
		printedList += to_string(current->_data) + "->";
		current = current->_next;
	}

	return printedList;
}


void RecursiveCreateLinkedList::_Append(int data, LLNode* current)
{
	if (!current->_next)
	{
		current->_next = new LLNode(data);
	}
	else
	{
		_Append(data, current->_next);
	}
}
