#include <iostream>
#include <vector>

using namespace std;

string maxsubstr(string a,string b)
{
	string s = "";
	for(auto i = 0;i < max(a.size(),b.size());++i)
	{
		if(a[i] == b[i])
			s.push_back(a[i]);	
		else
			break;
	}	
	return s;	
}
string prefix(vector<string> & strs)
{
	if(strs.empty())
		return "";
	if(strs.size() == 1)
		return strs[0];

	int max_len = 10000000;
	string max_string  = "";
	
	int temp;	
	for(auto i = 0; i < strs.size() - 1; ++i)
	{
		string t = maxsubstr(strs[i],strs[i + 1]);
//cout<<strs[i]<<"  --   "<<strs[i + 1]<<endl;
		temp = t.size();
		if(temp < max_len)
		{
			max_len = temp;
			max_string = t; 
		}		
	}
	return max_string;	
}

int main(){
	string a = "flower";
	string b = "flow";
	string c = "flight";
	vector<string> strs;
	strs.push_back(a);
	strs.push_back(b);
	strs.push_back(c);
	a.push_back('b');
	cout<<maxsubstr(b,c)<<"  ->   fl"<<endl;
	cout<<maxsubstr(a,b)<<"  ->   flow"<<endl;
	cout<<prefix(strs)<<"   ->   fl"<<endl;
	strs.clear();
	strs.push_back("dog");
	strs.push_back("racecar");
	strs.push_back("car");
	cout<<"["<<prefix(strs)<<"]"<<endl;
	cout<<"**"<<endl;
	strs.clear();
	cout<<"["<<maxsubstr("",a)<<"]"<<endl;
//	strs.push_back(a);
//	strs.push_back("");
    strs.push_back(a);
	cout<<"["<<prefix(strs)<<"]"<<endl;

}
