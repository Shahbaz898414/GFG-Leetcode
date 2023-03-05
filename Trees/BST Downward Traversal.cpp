

#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000



struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};


class Solution{
public:
    long long int verticallyDownBST(Node *root,int target){
    
        long long int sum = 0;
        Node * ans = NULL;
        bool f = false;
        solve(root,target,sum,f);
        if(f){
        return sum;
        }
        return -1;
    }
    
    void solve(Node * root,int target,long long int &sum,bool &f){
        if(root == NULL){
            return;
        }
        if(root->data == target){
            f = true;
            solve1(root->left,sum,-1);
            solve1(root->right,sum,1);
            return;
        }
        solve(root->left,target,sum,f);
        solve(root->right,target,sum,f);
    }
    
    void solve1(Node* root,long long int &sum,int k){
        if(root == NULL){
            return;
        }
        if(k==0){
            sum = sum + root->data;
        }
        solve1(root->left,sum,k-1);
        solve1(root->right,sum,k+1);
    }
};


Node* buildTree(string str)
{
   
   if(str.length() == 0 || str[0] == 'N')
       return NULL;

  
   vector<string> ip;

   istringstream iss(str);
   for(string str; iss >> str; )
       ip.push_back(str);

   
   Node* root = new Node(stoi(ip[0]));

 
   queue<Node*> queue;
   queue.push(root);

  
   int i = 1;
   while(!queue.empty() && i < ip.size()) {

       // Get and remove the front of the queue
       Node* currNode = queue.front();
       queue.pop();

       // Get the current node's value from the string
       string currVal = ip[i];

       // If the left child is not null
       if(currVal != "N") {

           // Create the left child for the current node
           currNode->left = new Node(stoi(currVal));

           // Push it to the queue
           queue.push(currNode->left);
       }

       // For the right child
       i++;
       if(i >= ip.size())
           break;
       currVal = ip[i];

       // If the right child is not null
       if(currVal != "N") {

           // Create the right child for the current node
           currNode->right = new Node(stoi(currVal));

           // Push it to the queue
           queue.push(currNode->right);
       }
       i++;
   }

   return root;
}

void inorder(Node *root, vector<int> &v)
{
    if(root==NULL)
        return;

    inorder(root->left, v);
    v.push_back(root->data);
    inorder(root->right, v);
}

int main() {
 
   int t;
   string tc;
   getline(cin, tc);
   t=stoi(tc);
   while(t--) {
        int target;
        cin>>target;
        string newline;
        getline(cin,newline);
        string s; 
        getline(cin, s);
        Node* root = buildTree(s);
        Solution ob;
        cout<<ob.verticallyDownBST(root, target)<<endl;
   }
   return 0;
}
// } Driver Code Ends

