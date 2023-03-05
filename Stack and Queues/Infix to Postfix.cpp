//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++



class Solution {


  public: 
    int prec(char c) {
      if (c == '^')
        return 3;
      else if (c == '/' || c == '*')
        return 2;
      else if (c == '+' || c == '-')
        return 1;
      else
        return -1;
    }
   
    string infixToPostfix(string s) {
        // Your code here

      stack < char > st;
      string result;

      for (int i = 0; i < s.length(); i++) {
        char c = s[i];

        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
          result += c;
        else if (c == '(')
          st.push('(');

        else if (c == ')') {
          while (st.top() != '(') {
            result += st.top();
            st.pop();
          }
          st.pop();
        }

        else {
          while (!st.empty() && prec(s[i]) <= prec(st.top())) {
            result += st.top();
            st.pop();
          }
          st.push(c);
        }
      }

      while (!st.empty()) {
        result += st.top();
        st.pop();
      }

      return result;
    }
    
};


//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        string n,k;
        cin>>n;
        // vector<int> arr(n);
        // for(int i=0;i<n;i++){
        //     // int x, y;
        //     cin>>arr[i];
        // }

         Solution ob;

        cout<<ob.infixToPostfix(n)<<endl;
        cout<<endl;
        
    }
    
    return 0;
}


// } Driver Code Ends

/*

*/