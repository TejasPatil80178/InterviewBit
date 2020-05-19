/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
int size(ListNode* a)
{
	int l = 0;
	while(a!=NULL)
	{
		a = a->next;
		l++;
	}
	
	return l;
}
 
int Solution::lPalin(ListNode* a) {
    int l = size(a);
	int mid = l/2;
	ListNode* p = a;
	while(mid > 0)
	{
		p = p->next;
		mid--;
	}
	
	if(l%2!=0)
	{
	    p = p->next;
	}
	
	ListNode* prev = NULL;
	ListNode* nxt = NULL;
	while(p!=NULL)
	{
		nxt = p->next;
		p->next = prev;
		prev = p;
		p = nxt;
	}
	
	p = prev;
	
	while(a!=NULL && p!=NULL)
	{
		if(a->val!= p->val)
		{
			return 0;
		}
		a = a->next;
		p = p->next;
	}
	return 1;
}
