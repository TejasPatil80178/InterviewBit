/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int small;
void inorder(TreeNode* r,int &b)
{
	if(r==NULL) return;
	inorder(r->left,b);
	if(b>0) 
	{
		small = r->val;
		b--;
	}
	else if(b==0) return;
	inorder(r->right,b);
}

int Solution::kthsmallest(TreeNode* A, int B) {
    inorder(A,B);
    return small;
}
