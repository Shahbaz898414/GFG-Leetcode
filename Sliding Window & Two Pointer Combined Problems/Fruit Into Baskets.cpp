#include<bits/stdc++.h>
using namespace std;


int totalFruit(vector<int>& arr) {
        unordered_map<int,int>mp;
        int maxi=0;
        int i=0, j=0;
        int n=arr.size();
        while(i<n ){
            mp[arr[i]]++,i++;
            while(mp.size()>2){
              mp[arr[j]]--;
              if(mp[arr[j]]==0)mp.erase(arr[j]);
              j++;
            } 
            int c=0;
            maxi=max(maxi,i-j);
        }
        return maxi;        
}



int main() {

	// int t;
	// cin>>t;
	// while(t--){
	    int n;
	    cin>>n;
	    vector<int> arr(n);
	    for(int i = 0;i<n;i++){
	        cin>>arr[i];
	    }

      cout<<totalFruit(arr);
	   
	// }
  
	return 0;
}
// } Driver Code Ends