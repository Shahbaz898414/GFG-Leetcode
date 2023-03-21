#include <bits/stdc++.h>
using namespace std;

// class Solution {
//  public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long res = 0;
        long long counter = 0;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]==0){
                counter++;
            }else{
                res+=(counter*(counter+1))/2;
                counter = 0;
            }
        }
        if(counter){
            res+=(counter*(counter+1))/2;
            counter = 0;
        }
        return res;
    }
// };

int main(){
  int n;cin>>n;


  vector<int> v;

  for (int i = 0; i < n; i++) {
    cin>>v[i];
    
  }

  cout<<zeroFilledSubarray(v)<<endl;
  
}