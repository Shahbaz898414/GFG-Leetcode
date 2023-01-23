#include <bits/stdc++.h>
using namespace std;
#define ll long long int

vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans; 
        sort(intervals.begin(),intervals.end());
        vector<int> temp = intervals[0];
        for(auto it : intervals)
        {
            if(temp[1] >= it[0])
            {
                temp[1] = max(temp[1],it[1]);

            }
            else
            {
                ans.push_back(temp);
                temp = it;
            }
        }

        ans.push_back(temp);

        return ans;
}

// 

vector<vector<int>> merge1(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        

        
        sort(intervals.begin(),intervals.end());
        vector<int> temp = intervals[0];

        for (auto it:temp)
        {
          /* code */
          cout<<it<<" ";
        }
        cout<<endl;
        

       

        for(auto it : intervals)
        {
            if(temp[1] >= it[0])
            {
                temp[1] = max(temp[1],it[1]);

            }
            else
            {
                ans.push_back(temp);
                temp = it;
            }
        }

        ans.push_back(temp);

        return ans;
    }

vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals) {
       
}

int main() {

  int n,B;cin>>n;

  vector<vector<int>> a(n);
  
  for (int i = 0; i < n; i++) {
   int x,y;cin>>x>>y;
   
    a[i].push_back(x);
    a[i].push_back(y);
  }

 vector<vector<int>> ans= merge(a);

 for(auto it:ans){
  for(auto i:it){
    cout<<i<<' ';
  }

  cout<<endl;
 }

 

 
  
}