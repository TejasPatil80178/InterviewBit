/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 int check(TreeNode* r1,TreeNode* r2)
{
	if(r1==NULL && r2==NULL) return 1;
	else if(r1==NULL || r2==NULL) return 0;
	
	if(r1->val != r2->val) return 0;
	
	return check(r1->left,r2->right)&&check(r1->right,r2->left);
}

int Solution::isSymmetric(TreeNode* a) {
    if(a==NULL) return 0;
    
    return check(a->left,a->right);
}
