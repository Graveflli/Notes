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
	ListNode *t;
	if(!l1)
		return l2;
	if(!l2)
		return l1;

	if(l1 -> val < l2 -> val)
	{
		s = l1;
		t = s;
		l1 = l1 -> next;
	}
	else
	{
		s = l2;
		t = s;
		l2 = l2 -> next;
	}
	while(l1 && l2)
	{
		if(l1 -> val < l2 -> val)
		{
			s -> next = l1;
			l1 = l1 -> next;
			s = s -> next;
		}
		else
		{
			s -> next = l2;
			l2 = l2 -> next;
			s = s -> next;
		}
	}
	if(l1)
		s -> next  = l1;
	if(l2)
		s -> next = l2;
	return t;
}

int main(){
	ListNode * l1 = new ListNode(3);
	ListNode * l2 = new ListNode(1);
	ListNode * a = l1;
	ListNode * b = l2;
	//l1 -> next = new ListNode(2);
	l2 -> next = new ListNode(3);
	//l1 = l1 -> next;
	l2 = l2 -> next;
	//l1 -> next = new ListNode(4);
	l2 -> next = new ListNode(4);
	ListNode * s = merge(a,b);
	while(s)
	{
		cout<<s -> val<<" ";	
		s = s -> next;
	}	
	cout<<endl;


}
