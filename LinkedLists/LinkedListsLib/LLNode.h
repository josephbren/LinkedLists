#pragma once

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