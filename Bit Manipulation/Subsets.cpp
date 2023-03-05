#include<bits/stdc++.h>  
using namespace std; 
#define ll long long int 


vector<vector<int>> subsets(vector<int>& arr){
  int n=arr.size();

  vector<vector<int>> ans;

  for (int i = 0; i <(1<<n); i++)
  {
    vector<int> temp;
    
    for (int j = 0; j <n; j++)
    {
      if(i&(1<<j)) temp.push_back(arr[j]);
    }

    ans.push_back(temp);
    
  }

  return ans;
  
}







int main() {
  // long long n,i;cin>>n>>i;
  // string s;cin >>s;

 
  
}

