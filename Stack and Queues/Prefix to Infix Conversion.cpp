#include <bits/stdc++.h>
using namespace std;


class Solution {
  public:
    string preToInfix(string pre_exp) {
        string s,d;
        stack<string>s1;
        for(int i=pre_exp.size()-1;i>=0;i--) {
            if(pre_exp[i]=='+'|| pre_exp[i]=='-'|| pre_exp[i]=='*'|| pre_exp[i]=='/') {
                string op2 = s1.top();
                s1.pop();
                string op1 = s1.top();
                s1.pop();
                s1.push(")"+op1+pre_exp[i]+op2+"(");
                // s+=s1.top();
                // s+=" $ ";
            }
            else {   
              string x="";
                 x+= pre_exp[i];
                s1.push(x);
                // d+=s1.top();
                // d+=" $ ";
            }
        }
        string x = s1.top();

        // cout<<d<<endl;cout<<s<<endl<<endl;
        //   reverse(d.begin(),d.end());
        //   reverse(s.begin(),s.end());
        // cout<<d<<endl;cout<<s<<endl<<endl;

        // cout<<x<<endl;
        reverse(x.begin(),x.end());
        return x;
    }
};



int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        
        string prefix;
        cin >> prefix;

        Solution obj;
        cout << obj.preToInfix(prefix) << endl;

       
    }
    
    return 0;
}

// } Driver Code Ends