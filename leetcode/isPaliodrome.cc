#include <iostream>
#include <cmath>

using namespace std;
bool Pali(string s){
	for(auto i = 0;i < s.size() / 2; ++i)
	{
		if(s[i] != s[s.size() - i - 1])
			return false;
	}
	return true;

}
bool isPalidrome(int x)
{
	string s;
	int flag = 0;
	if(x < 0)
		return false;
	x = abs(x);
	
	char a;
	while(x >= 10)
	{
		a = (char) (x % 10 + '0');
		cout<<"x % 10 is["<<x % 10<<"] a is ["<<a<<"]"<<endl;
		s.push_back(a);
		x = x / 10;	
	}
	a = (char) x % 10 + '0';
	s.push_back(a);

	cout<<"s is ["<<s<<"]"<<endl;

	if(Pali(s))
		return true;
	return false;
}

int main(){
	int x;
	while(cin>>x)
		cout<<isPalidrome(x)<<endl;
}
