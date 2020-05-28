/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> v;
void inorder(TreeNode* r)
{
    if(r==NULL) return ;
    inorder(r->left);
    v.push_back(r->val);
    inorder(r->right);
}
BSTIterator::BSTIterator(TreeNode *root) {
    inorder(root);
}

/** @return whether we have a next smallest number */
bool BSTIterator::hasNext() {
    if(v.empty()) return 0;
    else return 1;
}

/** @return the next smallest number */
int BSTIterator::next() {
    int x = v[0];
    v.erase(v.begin());
    return x;
}

/**
 * Your BSTIterator will be called like this:
 * BSTIterator i = BSTIterator(root);
 * while (i.hasNext()) cout << i.next();
 */
