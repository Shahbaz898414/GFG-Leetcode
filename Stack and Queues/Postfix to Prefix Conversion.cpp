#include <bits/stdc++.h>
using namespace std;



class Solution {
  public:
    int isopd(char x){
      if(x=='+'||x=='-'||x=='*'||x=='/'){
        return 0;
      }else return 1;
    }
    string postToPre(string exp) {
            stack<string> st;
            string res;
         
         for(int i=0;i<exp.size();i++){
             if(isopd(exp[i])) {
                  st.push(string(1,exp[i]));
                  // cout<<st.top()<<"1 ";
           
             }else{
                string x=st.top();
                st.pop();
                string y=st.top();
                st.pop();
                 
                st.push( exp[i] + y +  x );   
                // cout<<st.top()<<" ";
            }
          }

          // cout<<endl;
          res = st.top();
          st.pop();
        return res;
    }
};

//{ Driver Code Starts.
int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input
        string postfix;
        cin >> postfix;

        // char marker; cin >> marker;

        Solution obj;
        cout << obj.postToPre(postfix) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}

// } Driver Code Ends