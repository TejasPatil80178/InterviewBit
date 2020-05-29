/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void preorder(TreeNode* r,vector<int> &v)
{
    if(r==NULL) return;
    
    v.push_back(r->val);
    preorder(r->left,v);
    preorder(r->right,v);
}
vector<int> Solution::preorderTraversal(TreeNode* a) {
    vector<int> v;
    preorder(a,v);
    return v;
}
