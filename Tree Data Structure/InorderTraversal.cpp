/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void inorder(TreeNode* r,vector<int> &v)
{
    if(r==NULL) return;
    
    inorder(r->left,v);
    v.push_back(r->val);
    inorder(r->right,v);
    
}
vector<int> Solution::inorderTraversal(TreeNode* a) {
    vector<int> v;
    inorder(a,v);
    
    return v;
}
