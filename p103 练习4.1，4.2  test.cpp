#include "stack.h"
using namespace std;

int main()
{
	stack st;
	st.push(string("yangmenglin"));
	st.push(string("meimei"));
	st.push(string("I"));
	st.push(string("like"));
	st.push(string("you"));

	cout << st.size() << endl;

	string elem; 

	if (st.peek(elem))
	{
		cout <<elem<< " 存在" << endl;
	}

	st.pop(elem);
	cout << elem << " size:" << st.size() << endl;

	if (!st.empty())
	{
		cout << "非空" << endl;
	}

	if (!st.full())
	{
		cout << "非满" << endl;
	}

	if (st.find(string("meimei")))
	{
		cout << "meimei 在我心里呀" << endl;
	}

	int count;
	if ((count = st.count(string("yangmenglin"))) >= 0)
	{
		cout <<"出现次数:"<< count << endl;
	}

	return 0;
}
