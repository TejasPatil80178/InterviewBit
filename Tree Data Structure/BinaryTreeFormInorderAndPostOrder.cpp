/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int search(vector<int> &in,int s,int e,int val)
{
    for(int i=s;i<=e;i++)
    {
        if(in[i]==val) return i;
    }
}
TreeNode* bt(vector<int> &in,vector<int> &post,int s,int e,int &p)
{
    if(s>e) return NULL;
    
    TreeNode* r = new TreeNode(post[p--]);
    
    if(s==e) return r;
    int index = search(in,s,e,r->val);
    
    r->right = bt(in,post,index+1,e,p);
    r->left = bt(in,post,s,index-1,p);
    
    return r;
}
TreeNode* Solution::buildTree(vector<int> &in, vector<int> &post) {
    int p = post.size()-1;
    return bt(in,post,0,post.size()-1,p);
}
