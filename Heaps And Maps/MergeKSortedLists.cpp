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
    vector<int> v;
    for(int i = 0;i<n;i++){
        ListNode* temp = a[i];
        while(temp!=NULL){
            v.push_back(temp->val);
            temp = temp->next;
        }
    }
    sort(v.begin(),v.end());
    if(!v.empty()){
        ListNode* nl = new ListNode(v[0]);
        ListNode* temp = nl;
        for(int i = 1;i<v.size();i++){
            temp->next = new ListNode(v[i]);
            temp = temp->next;
        }
        return nl;
    }
    else{
        ListNode* temp;
        return temp;
    }
}
