/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int Solution::isSameTree(TreeNode* a, TreeNode* b) {
    if(a==NULL && b==NULL) return 1;
	else if(a==NULL || b== NULL) return 0;
	
	if(a->val!=b->val) return 0;
	
	return (isSameTree(a->left,b->left) && isSameTree(a->right,b->right));
}
