/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
TreeNode* add(TreeNode* r,int x)
{
	if(r==NULL)
	{
		r = new TreeNode(x);
		return r;
	}
	TreeNode* temp = new TreeNode (x);
	if(x>r->val){
		temp->left = r;
		r = temp;
	}
	else{
		TreeNode* k = r;
		while(k->right!=NULL)
		{
			if(k->right->val < x)
			{
				temp->left = k->right;
				break;
			}
			else{
				k = k->right;
			}
		}
		k->right = temp;
	}
	
	return r;
}
TreeNode* Solution::buildTree(vector<int> &a) {
    if(a.empty()) return NULL;
    
    int n = a.size();
    TreeNode* r = NULL;
    for(int i=0;i<n;i++)
	{
		r = add(r,a[i]);
	}
	
	return r;
}
