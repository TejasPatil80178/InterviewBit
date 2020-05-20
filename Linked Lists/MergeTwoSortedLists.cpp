/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeTwoLists(ListNode* a, ListNode* b) {
    ListNode* nl = new ListNode(0);
	ListNode* p1 = a;
	ListNode* p2 = b;
	ListNode* nList = nl;
	while(p1!=NULL && p2!=NULL)
	{
		if(p1->val < p2->val)
		{
			nl->next = new ListNode(p1->val);
			nl = nl->next;
			p1 = p1->next;
		}
		else
		{
			nl->next =new ListNode(p2->val);
			nl = nl->next;
			p2 = p2->next;
		}
	}
	if(p1!=NULL)
	{
		nl->next = p1;
	}
	else if(p2!=NULL){
		nl->next = p2;
	}
	
	return nList->next;
}
