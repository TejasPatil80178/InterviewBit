/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int depth(TreeNode* r)
{
    if(r==NULL) return 0;
    
    int lt = depth(r->left);
    int rt = depth(r->right);
    
    if(lt>rt) return (lt+1);
    else return (rt+1);
}
int Solution::maxDepth(TreeNode* r) {
    return depth(r);
}
