//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends
//User function Template for C++



int jump(vector<int>& nums) {
        int n=nums.size();

    for (int i = 1; i <n; i++) {
    
      nums[i]=max(nums[i]+i,nums[i-1]);

    }

    int cnt=0;
    int ans=0;
    // for (int i = 0; i <n; i++) {
    
    //   cout<<nums[i]<<" ";
    // }

    // cout<<endl;

    

    while(cnt<nums.size()-1){
      ans++;
      cnt=nums[cnt];
    }


    return ans;
}


//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            // int x, y;
            cin>>arr[i];
        }

        cout<<jump(arr)<<endl;
        cout<<endl;
        
    }
    
    return 0;
}


// } Driver Code Ends

/*

*/