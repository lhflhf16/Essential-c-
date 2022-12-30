#define _CRT_SECURE_NO_WARNINGS 1

#include "stack.h"

bool
stack::push(const string& elem)
{
	//是否满
	if (full())
	{
		return false;
	}
	_stack.push_back(elem);
	return true;
}

bool
stack::pop(string& elem)
{
	if (empty())
	{
		return false;
	}
	elem = _stack.back();
	_stack.pop_back();
	return true;
}

bool
stack::peek(string& elem)
{
	if (empty())
	{
		return false;
	}
	elem = _stack.back();
	return true;
}

bool
stack::find(const string& elem)
{
	if (empty())
	{
		return false;
	}
	vector<string>::iterator it = _stack.begin();
	for (; it != _stack.end(); it++)
	{
		if (*it == elem)
		{
			return true;
		}
	}
	return false;
}

int
stack::count(const string& elem)
{
	if (empty())
	{
		return -1;
	}
	int count = 0;
	vector<string>::iterator it = _stack.begin(),
		end_it = _stack.end();
	for (; it != end_it; it++)
	{
		if (*it == elem)
		{
			count++;
		}
	}
	return count;
}
