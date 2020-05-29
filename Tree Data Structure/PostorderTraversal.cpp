/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void postorder(TreeNode* r,vector<int> &v)
{
    if(r==NULL) return;
    postorder(r->left,v);
    postorder(r->right,v);
    v.push_back(r->val);
}
vector<int> Solution::postorderTraversal(TreeNode* a) {
    vector<int> v;
    postorder(a,v);
    return v;
}
