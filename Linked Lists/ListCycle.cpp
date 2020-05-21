/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::detectCycle(ListNode* a) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    ListNode* s = a;
	ListNode* f = a;
	if(a==NULL || a->next == NULL)
	{
		return a;
	}
	s = s->next;
	f = f->next->next;
	while(s && f && f->next)
	{
		s = s->next;
		f = f->next->next;
		if(s==f)
		{
		    break;
		}
	}
	if(s==NULL || f == NULL || f->next==NULL) return NULL;
	s = a;
	while(s!=f)
	{
	    s = s->next;
	    f = f->next;
	}
	return s;
}
