#include<bits/stdc++.h>
using namespace std;
#define ll long long

// leet code
bool check(int mid ,vector<int>& nums ,int threshold) {
        int sum = 0;
        int n = nums.size();
        for(int i = 0 ; i < n ; i++){
            int val = 0;
            if(mid >= nums[i]){
                val = 1;
            }
            else{
                val = ceil((double)nums[i]/(double)mid);
            }
            //cout<<val<<endl;
            sum += val;
        }
        //cout<<sum<<endl;
        return sum <= threshold;
}

int smallestDivisor(vector<int>& nums, int threshold) {
        int lo = 1, // bad
        hi = 1e9 , // good
        ans = 0;
        while(lo <= hi){
            int mid = lo + (hi - lo) / 2;
            //cout<<lo<<" "<<mid<<" "<<hi<<" "<<ans<<endl;
            if(check(mid , nums , threshold)){
                ans = mid;
                hi = mid - 1;
            }
            else{
                lo = mid + 1;
            }
        }
        return ans;
}

// GFG
int smallestDivisor(vector<int>& nums, int K) {

        // Write your code here.
        int lo = 1, hi = INT_MAX;
        int ans = 0;

        while(lo <= hi) {
            int mid = lo + (hi - lo)/2;
            long long int sum = 0;
            for(int i=0;i<nums.size();i++) {
                if(nums[i]%mid==0) {
                    sum += (nums[i]/mid);
                }
                else {
                    sum += (nums[i]/mid)+1;
                }
            }
            if(sum > K) {
                lo = mid + 1;
            }
            else {
                ans = mid;
                hi = mid - 1;
            }
        }
        return ans;
}


int main() {

  int n,B,k;cin>>n;
  int a[n];

  // vector<int> a(n);
  
  for(int i=0; i<n; i++) {
    cin>>a[i];
  }


  for(int i=0;i<n;i++) {
    cout<<a[i]<<" ";
  }

  
}
