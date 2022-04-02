#pragma once
#include <string>

using namespace std;


class RecursiveCreateLinkedList
{
public:
	RecursiveCreateLinkedList();

	void Append(int data);
	string GetPrintedList();

	LLNode* GetHead();
	void SetHead(LLNode* head);

private:
	void _Append(int data, LLNode* current);

	LLNode* _head;
};