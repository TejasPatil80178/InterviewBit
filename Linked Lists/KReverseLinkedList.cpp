/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseList(ListNode* a, int k) {
    ListNode* p = a;
	bool flag = 1;
	ListNode* nl = NULL;
	ListNode* nList;
	while(p!=NULL)
	{
		int i = 0;
		ListNode* prev = NULL;
		ListNode* nxt = NULL;
		while(i<k)
		{
			nxt = p->next;
			p->next = prev;
			prev = p;
			p = nxt;
			i++;
		}
		if(nl==NULL) {
		    nl = prev;
		    nList = nl;
		}
		else{
		    while(nl->next!=NULL)
		    {
		        nl = nl->next;
		    }
		    nl->next = prev;
		}
	}
	
	return nList;
}
