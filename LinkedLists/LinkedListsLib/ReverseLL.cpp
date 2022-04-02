#include "pch.h"


LLNode* ReverseLinkedList(LLNode* head)
{
	LLNode* previous = nullptr;
	LLNode* current = head;

	while (current)
	{
		LLNode* next = current->_next;
		current->_next = previous;
		
		previous = current;
		current = next;
	}

	return previous;  // Return the new head
}