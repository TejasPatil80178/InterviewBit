/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int Solution::hasPathSum(TreeNode* r, int sum) {
    if(r==NULL){
        return (sum==0);
    }
    bool ans = 0;
    sum = sum-(r->val);
    if(sum==0 && r->left==NULL && r->right==NULL)
    {
        return 1;
    }
    if(r->left){
        ans = (ans||hasPathSum(r->left,sum));
    }
    if(r->right){
        ans = (ans||hasPathSum(r->right,sum));
    }
    return ans;
}
