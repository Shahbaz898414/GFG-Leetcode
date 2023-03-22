
#include<bits/stdc++.h>
using namespace std;


class Solution{   
public:
    long long solve(int X,int Y,string S){
      
       //code here
      string a="pr";
      string b="rp";
      
      //abcpr
      if(X<Y)
      {
          swap(X,Y);
          swap(a,b);
      }

      cout<<X<<" "<<a<<endl;
      
      long long ans=0;
      // stack [ a,b ]
      stack<char>st;
      int n=S.size();
      for(int i=0;i<n; i++)
      {
          if(st.empty())
          {
              st.push(S[i]);
          }
          else if(S[i]==a[1] and st.top()==a[0])
          {
              ans+=X;
              st.pop();
          }
          else
          {
              st.push(S[i]);
          }
      }

      // ans 15
      cout<<ans<<endl;


      
      S="";
     
      while(!st.empty())
      {
          S+=st.top();
          cout<<st.top();
          st.pop();
      }
      cout<<endl;
      cout<<S<<endl;
      reverse(S.begin(),S.end());
      n=S.size();
      
      for(int i=0;i<n; i++)
      {
          if(st.empty())
          {
              st.push(S[i]);
          }
          else if(S[i]==b[1] and st.top()==b[0])
        {
              ans+=Y;
              st.pop();
          }
          else {
              st.push(S[i]);
          }
      }
      
      return ans;
      
    }
};


int main() {
  // int t;
  // cin>>t;
  // while(t--) {
      int X,Y;
      cin>>X>>Y;
      string S;
      cin>>S;
      Solution obj;
      long long answer=obj.solve(X,Y,S);
      cout<<answer<<endl;
  // }
}
