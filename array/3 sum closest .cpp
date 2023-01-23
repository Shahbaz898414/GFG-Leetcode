#include <bits/stdc++.h>
#define ll long long int
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        set<vector<int>> vec;
        sort(nums.begin(),nums.end());
        for( int i=0;i<=n-1;i++)   // traversing till 3rd last element
        {
           int low=i+1;    // next element to the selected element
           int high=n-1;    // last elemet selected for iteration
            
            while(low<high)
            {
                int ans=nums[low]+nums[high]+nums[i];
                //cout<<low<<" "<<high<<" "<<nums[low]<<" "<<nums[high]<<" "<<ans<<" "<<nums[i]<<endl;
                if((ans)==0)
                {
                    // cout<<k<<" ";
                    vector<int> v{nums[i],nums[low],nums[high]};
                    vec.insert(v);
                   low++;
                    high--;
                    //break;
                }
                else if(ans>0)
                {
                  high--;  
                }
                else
                {
                    low++;
                }
            }
        }
        vector<vector<int>> mp;
	copy(vec.begin(), vec.end(),inserter(mp, mp.begin()));

        return mp;
    }

vector<vector<int>> threeSum(vector<int>& arr) {
        vector<vector<int>> ans;
        sort(arr.begin(), arr.end());
        for(int i = 0;i<arr.size();i++){
            if(i > 0 &&  arr[i] == arr[i-1]) continue;
            int l = i+1, r = arr.size()-1;
            vector<int> temp;
            while(l < r){
                if(arr[i] + arr[l] + arr[r] == 0){
                    temp.emplace_back(arr[i]);
                    temp.emplace_back(arr[l]);
                    temp.emplace_back(arr[r]);
                    ans.emplace_back(temp);
                    while(l < arr.size()-1 && arr[l] == arr[l+1]){
                        l++;
                    }
                    while(r > 1 && arr[r-1] == arr[r]){
                        r--;
                    }
                    r--;l++;
                }
                else if(arr[i] + arr[l] + arr[r] > 0) r--;
                else l++;
                temp.clear();
                
            }
        }
        return ans;
    }

int main() {
  int n,x;cin>>n;

  int arr[n];

  for (int i = 0; i < n; i++) {
    cin>>arr[i];
  }

  cin>>x;

  sort(arr,arr+n);
  int mi=INT_MAX,ans;

  for (int i =    0; i <n-2; i++)
  {
    /* code */
    int l=i+1,r=n-1;

    while(l<r){
      if(abs((arr[i]+arr[l]+arr[r])-x)<mi){
        mi=abs(arr[i]+arr[l]+arr[r]-x);
        ans=arr[i]+arr[l]+arr[r];
      }

      if((arr[i]+arr[l]+arr[r])==x){
        return x;
      }else if((arr[i]+arr[l]+arr[r])>x){
        r--;
      }else{
        l++;
      }
    }
  }

  cout<< ans;
  

  
}