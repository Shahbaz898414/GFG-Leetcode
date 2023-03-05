//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string x) {
       stack<char> temp;
       for (int i = 0; i < x.size(); i++) {
          if(temp.empty()) {
            temp.push(x[i]);
          }else if((temp.top()=='(' and x[i]==')')
                  || (temp.top()=='[' and x[i]==']') ||
                  (temp.top()=='{' and x[i]=='}')) {
                    temp.pop();
          }else {
            temp.push(x[i]);
          }
       }


       if(temp.empty()) return true;
       return false;
       
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends