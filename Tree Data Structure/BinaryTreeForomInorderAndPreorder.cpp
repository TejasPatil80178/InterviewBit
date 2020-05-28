/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int search(vector<int> &in,int s, int e,int val)
{
    for(int i=s;i<=e;i++)
    {
        if(in[i]==val) return i;
    }
}

TreeNode* bt(vector<int> &pre,vector<int> &in,int s,int e,int &p)
{
    if(s>e) return NULL;
    
    TreeNode* r = new TreeNode(pre[p++]);
    if(s==e) return r;
    
    int index = search(in,s,e,r->val);
    r->left = bt(pre,in,s,index-1,p);
    r->right = bt(pre,in,index+1,e,p);
    
    return r;
}
 
TreeNode* Solution::buildTree(vector<int> &pre, vector<int> &in) {
    int p = 0;
    return bt(pre,in,0,in.size()-1,p);
}
