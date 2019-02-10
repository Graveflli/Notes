#include <iostream>

using namespace std;
int longestsubstring(string s)
{
	for(auto i = 0; i < s.size();++i)
	{
		for(auto j = i + 1;j < s.size();++j)
		{
			if(s[j] == s[i])
				return j;	
		}
	}
	return s.size();
//	return 0;
}
int lengthsubstring(string s)
{
	if(s == "")
		return 0;

	int max_length = 0;
	int temp = 0;
	for(auto i = 0;i < s.size(); ++i)
	{
		cout<<s.substr(i,s.size())<<"  ->  ";
		temp = longestsubstring(s.substr(i,s.size()));
		if(temp >= max_length)
			max_length = temp;
	}
	return max_length;
}

int main()
{
	string s;
	string a = " ";
	cout<<lengthsubstring(a)<<endl;
	a = "";
	cout<<lengthsubstring(a)<<endl;
	while(getline(cin,s))
//	while(cin>>s)
		cout<<lengthsubstring(s)<<endl;

}
