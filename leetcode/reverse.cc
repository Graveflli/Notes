#include <iostream>
#include <cmath>
#include <vector>
#include <list>
using namespace std;
int reverse(int x)
{
	list<int> vec;
	int t;
	int flag = 0;
	if(x < 0)
		flag = 1;
	x = abs(x);	
	while(x >= 10)
	{
		t = x % 10;
		vec.push_front(t);
		x = x /10;	
	}
	if(x > 0 && x <= 10)
	{
		t = x % 10;
		vec.push_front(t);
	}
	long int y = 1;
	long int sum = 0;
	for(auto i: vec)
	{
//		cout<<"["<<i<<"] ";
		sum += i * y;
		y *= 10;
	}
	cout<<endl;
	if(sum > 2147483647 || sum < -2147483648 || -1 * sum < -2147483648 || -1 * sum > 2147483647)
		return 0;	
	return flag == 1 ? -1 *sum : sum;
}

int main(){
	int x;
	while(cin>>x)
		cout<<reverse(x)<<endl;
	
}
