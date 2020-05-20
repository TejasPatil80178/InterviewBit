/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

ListNode* Solution::addTwoNumbers(ListNode* a, ListNode* b) {
	int carry = 0;
	int sum = a->val + b->val + carry;
	carry = sum/10;
	sum %= 10;
	//cout<<sum<<" "<<carry<<endl;
	ListNode* nl = new ListNode(sum);
	ListNode* nlist = nl;
	a=a->next;
	b=b->next;
	while(a!=NULL || b!=NULL || carry!=0)
	{
	    sum = 0;
	    if(a!=NULL)
	    {
	        sum+=a->val;
	        a = a->next;
	    }
	    if(b!=NULL)
	    {
	        sum+=b->val;
	        b = b->next;
	    }
	    if(carry!=0)
	    {
	        sum+=carry;
	    }
	    carry = sum/10;
	    sum%=10;
	    nl->next = new ListNode(sum);
	    nl = nl->next;
	}
	
	return nlist;
	
}
