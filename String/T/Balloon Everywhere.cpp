//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;



class Solution{
public:
    int maxInstance(string s){
        int n=s.size();
        map<char,int> mp;
        for (int i = 0; i <n; i++)
        {
          /* code */
          if(s[i]=='b') mp[s[i]]++;
          else if(s[i]=='l') mp[s[i]]++;
          else if(s[i]=='o') mp[s[i]]++;
          else if(s[i]=='n') mp[s[i]]++;
          else  mp[s[i]]++;
        }
        int f=mp['o'];
        int g=mp['l'];

        f=f/2;
        g=g/2;

        int mi=min(f,g);

        // cout<<mi<<endl;

        for(auto it:mp){
          

          if(it.first=='b'||it.first=='a'||it.first=='l'||it.first=='o'||it.first=='n')
          mi=min(mi,it.second);
          // cout<<it.second<<" ";
        }

        // cout<<endl;

        return mi;
        
    }
};


int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.maxInstance(s)<<endl;
    }
    return 0;
}
