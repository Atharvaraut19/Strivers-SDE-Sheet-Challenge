#include <bits/stdc++.h> 
/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/
void solve(TreeNode* root,vector<int> &ans)
{
    if(root == NULL)
    {
        return;
    }
    else{
        ans.push_back(root->data);
        solve(root->left, ans);
        solve(root->right, ans);
    }
}
    vector<int> getPreOrderTraversal(TreeNode* root) {
  vector<int> ans;
  solve(root,ans);
  return ans;
    }