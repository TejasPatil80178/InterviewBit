/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int findMin(TreeNode* r)
{
    if(r==NULL) return INT_MAX;
    
    if(r->left==NULL && r->right==NULL) return 1;
    
    return min(findMin(r->left),findMin(r->right)) + 1;
}
int Solution::minDepth(TreeNode* r) {
    if(r==NULL) return 0;
    
    return findMin(r);
}
