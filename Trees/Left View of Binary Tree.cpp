//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// Tree Node
struct Node
{
    int data;
    Node* left;
    Node* right;
};

vector<int> leftView(struct Node *root);


Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}



Node* buildTree(string str)
{
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
        return NULL;

    vector<string> ip;

    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);

   
    Node* root = newNode(stoi(ip[0]));

   
    queue<Node*> queue;
    queue.push(root);

   
    int i = 1;
    while(!queue.empty() && i < ip.size()) {

       
        Node* currNode = queue.front();
        queue.pop();

        
        string currVal = ip[i];

       
        if(currVal != "N") {

           
            currNode->left = newNode(stoi(currVal));

        
            queue.push(currNode->left);
        }

    
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];

      
        if(currVal != "N") {

        
            currNode->right = newNode(stoi(currVal));

        
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


int main() {
    int t;
    scanf("%d ",&t);
    while(t--)
    {
        string s;
        getline(cin,s);
        Node* root = buildTree(s);
        vector<int> vec = leftView(root);
        for(int x : vec)
        cout<<x<<" ";
        cout << endl;
    }
    return 0;
}





void recursion(Node* root,int level,vector<int> & res){
  if(root==NULL)  return ;
  if(res.size()==level) {
     res.push_back(root->data);
  }
    recursion(root->left,level+1,res);
    recursion(root->right,level+1,res);
  
}



vector<int> leftView(Node *root)
{
   // Your code here

   vector<int> ans;

   recursion(root,0,ans);


   return ans;
}


/*
void solve(TreeNode* root, vector<int> &ans, int level)
    {
        // base case
        if (root == NULL)
        {
            return ; 
        }

        // we entered a new level 
        if (level == ans.size())
        {
            ans.push_back(root -> val) ; 
        }

        solve(root -> right, ans, level + 1) ; 
        solve(root -> left, ans, level + 1 ) ; 
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans ; 
        int level = 0 ; 

        solve(root, ans, level) ;
        
        return ans ; 
    }

*/
