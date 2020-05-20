/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int len(ListNode* a)
{
	int l = 0;
	while(a!=NULL)
	{
		a = a->next;
		l++;
	}
	return l;
}

ListNode* Solution::reorderList(ListNode* a) {
    ListNode* nl = a;
	int l = len(a);
	int mid = l/2;
	ListNode* p = a;
	while(mid > 0)
	{
		p = p->next;
		mid--;
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
	while(a->next!=NULL && p->next!=NULL)
	{
		ListNode* temp = a->next;
		a->next = p;
		a = temp;
		temp = p->next;
		p->next = a;
		p = temp;
	}
	
	return nl;
}
