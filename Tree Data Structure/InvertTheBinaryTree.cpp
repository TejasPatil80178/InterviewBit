/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void invert(TreeNode* r)
{
	if(r==NULL) return ;
	
	TreeNode* temp = r->right;
	r->right = r->left;
	r->left = temp;
	
	invert(r->left);
	invert(r->right);
}

TreeNode* Solution::invertTree(TreeNode* a) {
    invert(a);
    return a;
}
