#include<bits/stdc++.h>  
using namespace std; 
#define ll long long int 


bool myCmp(pair<int,int> a, pair<int,int> b) {
    if(a.second == b.second) 
        return a.first < b.first;
        
    return a.second > b.second;
}

int main() {

  int t;cin>>t;
  while(t--){

    int n; cin >> n;
	    unordered_map<int,int> mp;
	    
	    for(int i = 0; i < n; i++)
	    {
	        int x;
	        cin >> x;
	        mp[x]++;
	    }
	    
	    vector<pair<int,int>> v(mp.begin(), mp.end());
	    
	    sort(v.begin(),v.end(), myCmp);

      // for(auto it:v){
      //   cout<<it.first<<" "<<it.second<<endl;
      // }

      // cout<<endl;
      
	    for(auto vi : v) {
	        for(int i = 0; i < vi.second; i++)
	            cout << vi.first << " ";
	    }
	    cout << endl;


   
  
  }
  
}

