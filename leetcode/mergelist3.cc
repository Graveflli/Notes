#include <iostream>

using namespace std;

struct ListNode{
	int val;
	ListNode * next;
	ListNode(int x):val(x),next(NULL){}	
};

ListNode * merge(ListNode * l1,ListNode *l2)
{
	ListNode * s = l1;
	ListNode * t = l1;
	int flag = 0;//record l1 moved once
	while(l2)
	{
		if(!l1)
			break;

		if(l1 -> val <= l2 -> val)
		{
			l1 = l1->next;
			if(flag)
				s = s -> next;
			flag = 1;
		}
		else
		{
			if(!flag)
			{
				s = l2;
				t = s;

				while(l2)
				{
					if(l2 -> val > l1 -> val)
						break;
					l2 = l2 -> next;
					if(s -> next)
					{
						s -> next = l2;	
						s = s -> next;

					}	
				}
ListNode * p = t;
while(p)
{
	cout<<p->val<<" ";
	p = p -> next;
}cout<<endl;
				s -> next  = l1;
			}
			else
        	{
        		ListNode * a = new ListNode(l2 -> val);
        		s -> next = a;
        		a -> next = l1;
        		l2 = l2 -> next;			
        		if(flag)
        			s = s -> next;
        	}	
		}
	}

	ListNode * t1 = t;
	while(t1)
	{
		cout<<t1 -> val<<" ";
		t1 = t1 -> next;
	}cout<<endl;

	if(!l1)
		s -> next = l2;
		//l1 = l2;
	else
		l1 -> next = l2;

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
