#include <iostream>
#include <string>
#include <vector>
#include <functional>
#include <algorithm>
using namespace std;

auto upper(string &s)
    {
        auto n = 0;
        for(auto & i : s)
        {
            if(n % 2 == 1)
            {
                if(i >= 'A' && i <= 'Z')
                    i = i - 'A' + 'a';
            }
            n++;
        }
        return s;
    
    }


int main()
{
	std::string s  =  "BORN IN 2015!";
	int n = 1;

	std::for_each(s.begin(),s.end(),[&s,&n](char & a) -> char{ if( a >= 'A' && a <= 'Z' )
	   														{
															if ( (char)(a + n) >= 'Z' )
																{ a = (a + n) - 'Z' + 'A' - 1 ;return a;} 
															 else{ a =  (a + n);return a; }
														     }
														 return a;});	
//	std::for_each(s.begin(),s.end(),
//			[&](char & a) -> char{
//		   	if( a >= 'A' && a <= 'Z' && (char)(a + n) > 'Z')
//			{ cout<<"**   "<<a<<endl; a = (char)(a + n + 'A' - 'Z' - 1);cout<<a<<endl; return a;}
//			else if(a >= 'A' && a <= 'Z' && (char)(a+n) <= 'Z') 	
//			{cout <<" -- "<<a<<endl; return a = (char) (a + n);});
		   											

	std::for_each(s.begin(),s.end(),[&](char & a) -> char{ if(a >= '0' && a <= '9'){  a = ( '0' + '9' - a ); return a;} });				

	
	s = upper(s);
	reverse(begin(s),end(s));
	std::cout<<s<<std::endl;
}
