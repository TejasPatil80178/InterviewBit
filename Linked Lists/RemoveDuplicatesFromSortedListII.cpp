/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::deleteDuplicates(ListNode* a) {
    if(a==NULL || a->next==NULL)
    {
        return a;
    }
    ListNode* nl = new ListNode(0);
	ListNode* p = a;
	ListNode* nlist = nl;
	bool flag = 0;
	while(p->next!=NULL)
	{
		if(p->val == p->next->val)
		{
			flag = 1;
		}
		else{
			if(flag==0)
			{
				nl->next = new ListNode(p->val);
				nl = nl->next;
			}
			flag = 0;
		}
		a = p;
		p = p->next;
	}
	if(a->val != p->val)
	{
	    nl->next = p;
	}
	
	return nlist->next;
}
