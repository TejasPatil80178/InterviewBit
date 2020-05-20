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

ListNode* Solution::removeNthFromEnd(ListNode* a, int n) {
    int l = len(a);
	n = l-n;
	ListNode* p = a;
	if(n>0)
	{
		while(n>1)
		{
			p = p->next;
			n--;
		}
		p->next = p->next->next;
		return a;
	}
	else{
		return a->next;
	}
}
