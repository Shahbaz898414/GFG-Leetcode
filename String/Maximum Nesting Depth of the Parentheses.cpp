#include<bits/stdc++.h>  
using namespace std; 
#define ll long long int 


int maxDepth(string s);



int main() {

  string s;cin>>s;

  cout<<maxDepth(s)<<endl; 


}


int maxDepth(string s) {
    int balanced = 0, answer = 0;
    for(auto c : s) {
        if(c == '(')  {
            balanced++;
            // cout<<balanced<<" ";
            answer = max(answer, balanced);
        }else if(c == ')') {
            balanced--;
            // if(balanced==0) cout<<0<<" ";
        }
    }
    // cout<<endl;
    // cout<<endl;
    return answer;
}

