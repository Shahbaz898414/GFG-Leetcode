#include <bits/stdc++.h>
using namespace std;



vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<pair<int, int>> v;
        vector<int> v2;
        pair<int, int> p;
        for(int i=0; i<nums.size(); i++){
            p.first = nums[i];
            p.second = i;
            v.push_back(p);
        }
        sort(v.begin(), v.end());
        auto it = v.begin(), it2 = v.end();
        it2 --;
        while(it < it2){
            int sum = it->first + it2->first;
            if(sum == target){
                v2.push_back(it->second);
                v2.push_back(it2->second);
                return v2;
            }
            else if(sum < target)
                it ++;
            else 
                it2 --;
        }
            
        return v2;
}

static bool cmp(pair<int,int> &a,pair<int,int> &b){
  return a.first<b.first;
}

// Driver code
int main() {
  int N,M,X, k;
  cin >> N >>M;
  // int arr[n];
  int A[N],B[N];
  unordered_set<int> s;

  vector<int > v(N);
  //  vector<pair<int,int>> v;

  for (int i = 0; i < N; i++) {
    // cin >> A[i];
    cin>>v[i];
    // s.insert(X-A[i]);
  }

   twoSum(v,M);

  



  // for (int i = 0; i < M; i++) {
  //   cin>>B[i];
  // }

  // for (int i = 0; i < M; i++)
  // {
  //   /* code */
  //   if(s.count(B[i])){
  //     v.push_back({X-B[i],B[i]});
  //   }
  // }

  // sort(v.begin(),v.end(),cmp);

  // for(auto it:v){
  //   cout<<it.first<<" "<<it.second<<endl;
  // }
  
  

 

  return 0;
}
