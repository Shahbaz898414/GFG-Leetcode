#include <bits/stdc++.h>
using namespace std;


struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


bool hasPath(TreeNode *root, vector<int>& arr, int x)
{
  
    if (!root)
        return false;
    
    arr.push_back(root->val);

    if (root->val == x)
        return true;

    if (hasPath(root->left, arr, x) ||
        hasPath(root->right, arr, x))
        return true;

    arr.pop_back();
    return false;
}

 

vector<int> solve(TreeNode* A, int B) {
    vector<int>ans;
    hasPath(A,ans,B);
    return ans;
}
