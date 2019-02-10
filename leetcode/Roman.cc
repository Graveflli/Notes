#include <iostream>

using namespace std;

auto Split(string s)
{
	int sum = 0;
	for(auto i = 0;i < s.size();++i)
	{
		if(s[i] == 'I')
		{
			if(i + 1 < s.size())
			{
				if(s[i + 1] == 'V')
				{
					sum += 4;
					i++;
				}
				else if(s[i + 1] == 'X')
				{
					sum += 9;
					i++;
				}
				else
				{
					sum += 1;
				}
			}
			else
				sum += 1;
		}
		else if(s[i] == 'X')
		{
			if(i + 1 < s.size())
			{
				if(s[i + 1] == 'L')
				{
					sum += 40;
					i++;
				}
				else if(s[i + 1] == 'C')
				{
					sum += 90;
					i++;
				}
				else
				{
					sum += 10;	
				}
			}
			else
				sum += 10;
		}
		else if(s[i] == 'C')
		{
			if(i + 1 < s.size())
			{
				if(s[i + 1] == 'D')
				{
					sum += 400;
					i++;
				}
				else if(s[i + 1] == 'M')
				{
					sum += 900;
					i++;
				}
				else
				{
					sum += 100;
				}
			}
			else
				sum += 100;
		}
		else
		{
			switch(s[i])
			{
				case 'V':sum += 5;
						 break;			     
				case 'I':sum += 1;
						 break;
				case 'X':sum += 10;
						 break;
				case 'L':sum += 50;
						 break;
				case 'C':sum += 100;
						 break;
				case 'D':sum += 500;
						 break; 
				case 'M':sum += 1000;
						 break;
			}	
		}
	}
	return sum;
}
int main()
{
	string s;
	while(cin>>s)
	{
		cout<<Split(s)<<endl;
	}	
}
