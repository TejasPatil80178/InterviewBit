/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

vector<vector<int> > Solution::zigzagLevelOrder(TreeNode* r) {
    vector<vector<int>> v;
    queue<TreeNode*> q;
    q.push(r);
    bool flag = 0;
    while(!q.empty())
    {
        int s = q.size();
        vector<int> a;
        for(int i=0;i<s;i++)
        {
            TreeNode* p = q.front();
            q.pop();
            a.push_back(p->val);
            if(p->left) q.push(p->left);
            if(p->right) q.push(p->right);
        }
        if(flag)
        {
            reverse(a.begin(),a.end());
            flag = 0;
        }
        else{
            flag = 1;
        }
        v.push_back(a);
    }
    
    return v;
}
