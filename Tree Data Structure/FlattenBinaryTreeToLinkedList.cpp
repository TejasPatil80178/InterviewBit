/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void pre(TreeNode* r,TreeNode* ans)
{
    if(r==NULL) return;
    
    cout<<r->val<<" ";
    pre(r->left,ans);
    pre(r->right,ans);
}
TreeNode* Solution::flatten(TreeNode* r) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    TreeNode* ans = r;
    TreeNode* t = ans;
    pre(r,ans);
    
    return t;
    
}
