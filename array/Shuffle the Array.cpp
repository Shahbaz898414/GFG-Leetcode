#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000


vector<int> shuffle(vector<int>& nums, int n) {

  // for(auto it:nums){
  //   cout<<it<<" ";
  // }

  // cout<<endl<<endl;
    vector<int> odd,even,ans;
   int j=n;
    for (int i = 0; i < n; i++) {
      odd.push_back(nums[i]);
      odd.push_back(nums[j++]);
    }

    return odd;


    // for (int i = n; i <2*n; i++) {
    //   // odd.push_back(nums[j++]);
    //   // cout<<nums[i]<<" ";
    //   even.push_back(nums[i]);
    // }
    // // cout<<endl;
    for(auto it:odd){
      cout<<it<<" ";
    }

    cout<<endl;
    // for(auto it:even){
    //   cout<<it<<" ";
    // }

    // cout<<endl;
    

    //  int j=0,k=n;

    // cout<<even[4]<< " bet "<<odd[3]<<endl;

    // for (int i = 0; i < 2*n; i++) {
    //   if(i%2){
    //     ans.push_back(even[k++]);
    //   }else{
    //     ans.push_back(odd[j++]);
    //   }
    // }

    // for(auto it:ans) cout<<it<<" ";

    // cout<<endl;
    
}


int main() {
 
  int n;cin>>n;

  vector<int> v(2*n);


  for (int i = 0; i < 2*n; i++){
  
    cin>>v[i];

    // cout<<v[i]<< " ";
  }

  cout<<1<<endl;
  // cout<<endl;

  shuffle(v,n);
  
}
// } Driver Code Ends

