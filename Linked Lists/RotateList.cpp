/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::rotateRight(ListNode* a, int k) {
    if(a==NULL || a->next==NULL || k==0)
    {
        return a;
    }
    ListNode* p = a;
	int l = 1;
	while(p->next!=NULL)
	{
		p = p->next;
		l++;
	}
	k = k%l;
	k = l-k;
	
	while(k>0)
	{
	    ListNode* temp = new ListNode(a->val);
	    temp->next = NULL;
		p->next = temp;
		p = p->next;
		a = a->next;
		k--;
	}
	
	return a;
}
