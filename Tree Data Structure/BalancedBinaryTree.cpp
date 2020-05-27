/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * }
 * 
 */
int isBal(TreeNode* t)
{
	if(t==NULL) return 0;
	
	int l = isBal(t->left);
	int r = isBal(t->right);
	
	if(abs(l-r)<=1 && l!=-1 && r!=-1)
	{
		return max(l,r)+1;
	}
	return -1;      //////Return -1 is tree is not balanaced
}
int Solution::isBalanced(TreeNode* a) {
    int temp = isBal(a);
    if(temp == -1) return 0;
    
    return 1;
    
}
