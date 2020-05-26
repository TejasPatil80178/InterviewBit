/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeKLists(vector<ListNode*> &a) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n = a.size();
    map<int,int> m;
	for(int i=0;i<n;i++)
	{
		ListNode* temp = a[i];
		while(temp!=NULL)
		{
			m[temp->val]++;
			temp = temp->next;
		}
	}
	ListNode* temp = new ListNode(0);
	ListNode* nl = temp;
	for(auto it = m.begin();it!=m.end();it++)
	{
	    while(it->second > 0)
	    {
	        temp->next = new ListNode(it->first);
	    	temp = temp->next;
	    	it->second--;
	    }
	}
	
	return nl->next;
}
