#pragma once
#include <string>

using namespace std;


class RecursiveCreateLinkedList
{
public:
	RecursiveCreateLinkedList();

	void Append(int data);
	string GetPrintedList();

	class LLNode
	{
	public:
		LLNode(int data)
		{
			_data = data;
			_next = nullptr;
		}

		int _data;
		LLNode* _next;
	};

private:
	void _Append(int data, LLNode* current);

	LLNode* _head;
};