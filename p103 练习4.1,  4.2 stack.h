#if !defined(__STACK_H__)
#define __STACK_H__

#include <string>
#include <vector>
#include <iostream>
using namespace std;

//创建stack class对象
class stack{
public:
	//从后面放入
	bool push(const string&);
	//从后面取出
	bool pop(string&);
	//观察最后一个元素
	bool peek(string&);
	//查找
	bool find(const string&);
	//返回字符串的出现次数
	int count(const string&);

	//判断是否为空
	bool empty();
	//判断是否满
	bool full();

	//计算stack的大小
	int size(){ return _stack.size(); };
private:
	//stack的实现基础
	vector<string> _stack;
};

inline bool
stack::empty()
{
	return (_stack.empty());
}

inline bool
stack::full()
{
	return (_stack.size() == _stack.max_size());
}

#endif
