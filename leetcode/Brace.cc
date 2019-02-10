#include <iostream>
#include <stack>

using namespace std;
bool isValid(string s)
{
	if(s == "")
		return true;
	
	stack<char> Stack;
	for(auto i : s)
	{
		if(i == '(' || i == '{' || i == '[')
			Stack.push(i);
		if(i == ')')
		{
			if(Stack.empty())
				return false;
			
			auto a = Stack.top();
			Stack.pop();
			if(a != '(')
				return false;	
		}
		if(i == ']')
		{
			if(Stack.empty())
				return false;

			auto a = Stack.top();
			Stack.pop();
			if(a != '[')
				return false;	
		}
		if(i == '}')
		{
			if(Stack.empty())
				return false;

			auto a = Stack.top();
			Stack.pop();
			if(a != '{')
				return false;	
		}
	}
	if(Stack.empty())
		return true;
	return false;
}

int main()
{
	string s;
	while(cin>>s)
	{
		if(isValid(s))
			cout<<"this one is right"<<endl;
		else
			cout<<"this one is wrong"<<endl;
	}


}
