#include<iostream>
#include<array>
#include<algorithm>
struct {
	bool operator()(int a,int b)
	{
		return a < b;
	} 

}compare;

int main()
{
	std::array<int,5> a = {1,2,3,4,5};
	std::sort(a.begin(),a.end(),compare);
	std::cout<<"four way to apply sort"<<std::endl;
	for(auto i : a){std::cout<<i<<" ";}
	std::cout<<std::endl;
	
	std::cout<<"second one"<<std::endl;
	std::sort(a.begin(),a.end(),[](auto a,auto b){return a < b;});	
	for(auto i : a){std::cout<<i<<" ";}
	std::cout<<std::endl;

	std::cout<<"third one"<<std::endl;
	std::sort(a.begin(),a.end(),[](auto a,auto b) -> bool{return a < b;});
	for(auto i : a){std::cout<<i<<" ";}
	std::cout<<std::endl;
	
	std::cout<<"forth one"<<std::endl;
	std::sort(a.begin(),a.end(),std::greater<int>());	
	for(auto i : a){std::cout<<i<<" ";}
	std::cout<<std::endl;
	
}
