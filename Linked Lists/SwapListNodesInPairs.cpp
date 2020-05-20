/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::swapPairs(ListNode* a) {
    ListNode* p = a;
	ListNode* nl = NULL;
	ListNode* nlist = nl;
	while(p!=NULL)
	{
		int i = 0;
		ListNode* prev = NULL;
		ListNode* nxt = NULL;
		while(i<2 && p!=NULL)
		{
			nxt = p->next;
			p->next = prev;
			prev = p;
			p = nxt;
			i++;
		}
		if(nl==NULL)
		{
			nl = prev;
			nlist = nl;
		}
		else{
			nl->next->next = prev;
			nl = nl->next->next;
		}
	}
	
	return nlist;
}
