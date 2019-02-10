#include <iostream>

using namespace std;

struct ListNode{
	int val;
	ListNode * next;
	ListNode(int x):val(x),next(NULL){}	
};

ListNode * merge(ListNode * l1,ListNode *l2)
{
	ListNode * s;
	ListNode * ss;
	while(l1 && l2)
	{
		ListNode * t = l1 -> val < l2 -> val ? l1 : l2;
		int temp = min(l1 -> val,l2 -> val);
		ListNode * a = new ListNode(temp);
		t = t -> next;
cout<<"step one"<<endl;
		if(!s){
			s -> val = temp;
			ss = s;
		}
		else
			s -> next = a;	
	}
	cout<<"step two"<<endl;
	while(l1)
	{
		ListNode * a = new ListNode(l1 -> val);
		l1 = l1 ->next;

		if(!s){
			s -> val = l1 -> val;
			ss = s;
		}

		else
			s -> next = a;	
	}
	while(l2)
	{
		ListNode * a = new ListNode(l2 -> val);
		l2 = l2 -> next;

		if(!s){	
			s -> val = l2 -> val;
			ss = s;
		}
		else
			s -> next = a;	
	}
cout<<"step end"<<endl;
	return ss;
}

int main(){
	ListNode * l1 = new ListNode(1);
	ListNode * l2 = new ListNode(2);
	ListNode * s = merge(l1,l2);
	while(s)
	{
		cout<<s -> val<<" ";	
		s = s -> next;
	}	
	cout<<endl;


}
