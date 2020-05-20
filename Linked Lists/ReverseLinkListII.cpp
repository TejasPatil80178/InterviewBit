/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseBetween(ListNode* a, int m, int n) {
    if(m==n) return a;
    ListNode* p = a;
    ListNode* p1 = NULL;
    int k =  n-m;
    while(m>1)
    {
        p1 = p;
        p = p->next;
        m--;
    }
    ListNode* temp = p;
	ListNode* prev = NULL;
	ListNode* nxt = NULL;
	int i = k+1;
	while(i--)
	{
	    nxt = p->next;
	    p->next = prev;
	    prev = p;
	    p = nxt;
	    //cout<<prev->val<<endl;
	}
	//cout<<prev->val<<" "<<p->val<<" "<<temp->val<<endl;
	if(p1!=NULL) p1->next = prev;
	else a = prev;
	
	temp->next = p;
	return a;
}
