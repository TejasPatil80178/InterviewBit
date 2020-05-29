/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
void Solution::connect(TreeLinkNode* r) {
    queue<TreeLinkNode*> q;
	q.push(r);
	while(!q.empty())
	{
		vector<TreeLinkNode*> v;
		int s = q.size();
		for(int i=0;i<s;i++)
		{
			TreeLinkNode* p = q.front();
			q.pop();
			v.push_back(p);
			if(p->left) q.push(p->left);
			if(p->right) q.push(p->right);
		}
		for(int i=0;i<v.size()-1;i++)
		{
			v[i]->next = v[i+1];
		}
	}
}
