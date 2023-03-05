//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// Tree Node
struct TreeNode {
    int data;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int val) {
        data = val;
        left = right = NULL;
    }
};

// Function to Build Tree
TreeNode *buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N')
        return NULL;

    
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;)
        ip.push_back(str);

    // Create the root of the tree
    TreeNode *root = new TreeNode(stoi(ip[0]));

    // Push the root to the queue
    queue<TreeNode *> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        TreeNode *currNode = queue.front();
        queue.pop();

        // Get the current Node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current Node
            currNode->left = new TreeNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size())
            break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current Node
            currNode->right = new TreeNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}




/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool checkforsame(TreeNode *p,TreeNode *q)
    {
        int checkl=0,checkr=0;
        if(p==NULL&&q==NULL)
        {
            return 1;
        }
        if(p==NULL&&q!=NULL)return 0;
        if(p!=NULL&&q==NULL)return 0;
        if(p->data==q->data)
        {
            checkl=checkforsame(p->left,q->left);
            checkr=checkforsame(p->right,q->right);

        }
        else return 0;
        return checkl&&checkr;


    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return checkforsame(p,q);
        
    }
};

//{ Driver Code Starts.


int main() {
   


    return 0;
}
