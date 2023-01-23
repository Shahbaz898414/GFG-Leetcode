#include <bits/stdc++.h>

using namespace std;
#define ll long long int

vector<vector<int>> fourSum(vector<int>& nums, int target) {
         if(nums.size()<4)
            return {};
        set<vector<int>> ans;
        long long int x,sum;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-3;i++)
        {
            for(int j=i+1;j<nums.size()-2;j++)
            {
                x=nums[i]+nums[j];
                int p=j+1,q=nums.size()-1;
                while(p<q)
                {
                    sum=nums[p]+nums[q];
                    if(sum+x==target)
                    {
                        ans.insert({nums[i],nums[j],nums[p],nums[q]});
                      p++;
                    }
                    else if(sum+x<target)
                        p++;
                    else if(sum+x>target)
                        q--;
                }
            }
        }
        vector<vector<int>> vc(ans.begin(), ans.end());
        return vc;
    }

    
// vector<vector<int>> fourSum(vector<int>& nums, int target) {
//         int n = nums.size();  
//         sort(nums.begin() , nums.end());  
//         vector<vector<int>> ans;  
//         set<vector<int>> store;  
		
//         for(int i = 0 ; i < n; i++){
		
//             for(int j = i + 1; j < n ; j++){
			
//                 int new_target  =  target - nums[i] - nums[j];
                
//                 int x = j+1 , y = n-1;
                
//                 while(x < y){
				
//                     int sum = nums[x] + nums[y];
                    
//                     if(sum > new_target) y--;
//                     else if(sum < new_target ) x++;
//                     else  {
//                         store.insert({nums[i] , nums[j] , nums[x] , nums[y]});
//                         x++;
//                         y--;
//                     };
//                 }
//             }
//         }
		
//         for(auto i : store){
//             ans.push_back(i);  // store the answers in an array(ans)
//         }
		
//         return ans;
//     }

// vector<vector<int>> fourSum(vector<int>& nums, int target) {
//         if(nums.size()<4)
//             return {};
//         set<vector<int>> ans;
//         long long int x,sum;
//         sort(nums.begin(),nums.end());
//         for(int i=0;i<nums.size()-3;i++)
//         {
//             for(int j=i+1;j<nums.size()-2;j++)
//             {
//                 x=nums[i]+nums[j];
//                 int p=j+1,q=nums.size()-1;
//                 while(p<q)
//                 {
//                     sum=nums[p]+nums[q];
//                     if(sum+x==target)
//                     {
//                         ans.insert({nums[i],nums[j],nums[p],nums[q]});
//                       p++;
//                     }
//                     else if(sum+x<target)
//                         p++;
//                     else if(sum+x>target)
//                         q--;
//                 }
//             }
//         }
//         vector<vector<int>> vc(ans.begin(), ans.end());
//         return vc;
// }

int main() {

  int n;cin>>n;

  vector<int> arr(n);

  for (int i = 0; i < n; i++) {
    cin>>arr[i];
  }
    int k;
  cin>>k;

  //  int n=arr.size();
         sort(arr.begin() , arr.end());  
        vector<vector<int>> ans;  
        set<vector<int>> store;  
        
        for(int i = 0 ; i < n; i++){
		
            for(int j = i + 1; j < n ; j++){
			
               int new_target  = (long long)k - (long long)arr[i] - (long long)arr[j];
                
                int x = j+1 , y = n-1;
                
                while(x < y){
				
                    long long sum = (long long)arr[x] + (long long)arr[y];
                    
                    if(sum > new_target) y--;
                    else if(sum < new_target ) x++;
                    else  {
                        store.insert({arr[i] , arr[j] , arr[x] , arr[y]});
                        x++;
                        y--;
                    };
                }
            }
        }
        
        for(auto i : store){
            ans.push_back(i);  
        }  

        for(auto &v:ans){
          for(int &u:v){
            cout<<u<<" ";
          }
          cout<<'$';
        }

  
}