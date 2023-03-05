#include<bits/stdc++.h>  
using namespace std; 
#define ll long long int 


vector<int>AllPrimeFactors(int N) {
	    
	    set<int> st;
	    vector<int> ans;
	    for(int i=2;i*i<=N;i++){
	        while(N%i==0){
	            N=N/i;
	            if(st.find(i)==st.end())
	             st.insert(i);
	        }
	    }
	    for(auto it:st)
	       ans.push_back(it);
	    if(N!=1)
	      ans.push_back(N);
	    return ans;
}


int main() {
  ll n,i;cin>>n;
  // string s;cin >>s;

  ll arr[n];

  for (ll i = 0; i < n; i++)
  {
    /* code */
    cin>>arr[i];
  }
  


}

