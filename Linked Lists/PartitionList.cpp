/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::partition(ListNode* a, int b) {
    ListNode* nl = new ListNode(0);
	ListNode* nlist = nl;
	ListNode* p = a;
	while(p!=NULL)
	{
		if(p->val < b)
		{
			nl->next = new ListNode(p->val);
			nl = nl->next;
		}
		p = p->next;
	}
	p = a;
	while(p!=NULL)
	{
		if(p->val >= b)
		{
			nl->next = new ListNode(p->val);
			nl = nl->next;
		}
		p = p->next;
	}
	return nlist->next;
}
