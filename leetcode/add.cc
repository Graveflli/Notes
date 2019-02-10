#include <iostream>

using namespace std;

struct ListNode{
	int val;
	ListNode * next;
	ListNode(int x):val(x),next(NULL){}

};
auto Listlength(ListNode * l)
{
	int n = 0;
	while(l)
	{
		n++;
		l = l -> next;
	}
	return n;
}
ListNode *  add(ListNode *l1,ListNode * l2)
{
	int flag = 0;//l1 or l2
	ListNode * s = new ListNode(0);
	if(Listlength(l1) > Listlength(l2))
	{
	  	flag = 1;	
//	    ListNode *s = l1;
		s = l1;
	}
	else
	{
		flag = 0;	
//		ListNode *s = l2;	
		s = l2;
	}
cout<<"step zreo    Listlength(l1) is["<<Listlength(l1)<<"] Listlength(l2) is ["<<Listlength(l2)<<"]"<<endl;	
	int n = 0;

	while(l1 && l2)
	{
		int sum = l1 -> val + l2 -> val + n;
		l1 -> val = sum % 10;
		l2 -> val = sum % 10;
		if(sum >= 10)
			n = 1;
		else 
			n = 0;
//		if(l1 -> next)
//			l1 = l1 -> next;
//		else 
//			break;
//		if(l2 -> next)
//			l2 = l2 -> next;
//		else 
//			break;
		l1 = l1 -> next;
		l2 = l2 -> next;
	}
cout<<"step one       and n is ["<<n<<"]"<<endl;	
	ListNode * t;
	if(flag == 1)
		t = l1;
	else 
		t = l2;
	if(t)
		cout<<"t->val is ["<<t -> val<<"]"<<endl;
	while(t)
	{
//cout<<"strp one-two"<<endl;
		int sum = t -> val + n;
		t -> val = sum % 10;
		
		t = t -> next;
		if(sum >=10)
			n = 1;
		else 
			n = 0;
	}	
cout<<"step two"<<endl;
	if(n == 1)
	{ 	
cout<<"step two-three"<<endl;
		ListNode * a = new ListNode(1);

		ListNode * temp = s;
		while(temp -> next)
			temp = temp -> next;
		temp -> next = a;
//		t -> next = a;
	}	
cout<<"step three"<<endl;
	return s;
}

int main()
{
	ListNode * l1 = new ListNode(5);
	ListNode * l2 = new ListNode(6);
	ListNode * a = new ListNode(5);
	ListNode * b = new ListNode(5);
	ListNode * c = new ListNode(5);
	l1 -> next = a;
	l2 -> next = b;
	ListNode * s1 = l1;
	ListNode * s2 = l2;
	l1 = l1 -> next;
	l2 = l2 -> next;
	l1 -> next = c;
	l2 -> next = new ListNode(5);
	
	while(l1)
	{
		cout<<"l1 -> val is ["<<l1->val<<"]"<<endl;
		l1 = l1 -> next;
	}
		
	ListNode * s = add(s1,s2);
	while(s)
	{
		cout<<"s->val is ["<<s -> val<<"]"<<endl;
		s = s -> next;
	}
}
