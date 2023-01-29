#include<bits/stdc++.h>  
using namespace std; 
#define ll long long int  


int beautySum(string s) {
        int ans=0;
        int mn,mx;
        if(s=="") return 0;
        
        int n=s.length();
        for(int i=0;i<n;i++)  {
            vector<int> freq(26);
            for(int j=i;j<n;j++){
                freq[s[j]-'a']++;
                mn=INT_MAX;
                mx=INT_MIN;
                for(int k=0;k<26;k++){
                    if(freq[k]!=0){
                        mn=min(mn,freq[k]);
                        mx=max(mx,freq[k]);
                    }
                }
                if(mn!=INT_MAX)
                ans+=(mx-mn);
            }
        }
        return ans;
        // Your code goes here
}

int main() {

//   int k;cin>>k;
  string s;cin>>s;
  cout<<beautySum(s)<<endl;
  
}



