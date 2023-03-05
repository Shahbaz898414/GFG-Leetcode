#include<bits/stdc++.h>  
using namespace std; 
#define ll long long int


pair<int,int> endPoints(vector<vector<int>> matrix, int r, int c) {
      
    int i=0,j=0;
    int dir=2;
    int n=matrix.size();
    int m=matrix[0].size();
    int ans1=0,ans2=0;

    while (i>=0 and j>=0 and i<n and j<m)
    {
      ans1=i;
      ans2=j;
      if(matrix[i][j]==0){
        if(dir==2) j++;
        if(dir==1) i--;
        if(dir==3) i++;
        if(dir==0) j--;
      }else{
        matrix[i][j]=0;

        if(dir==0) {
          dir=1;
        }else if(dir==1) {
          dir=2;
        }else if(dir==2) {
          dir=3;
        }else if(dir==3) {
          dir=0;
        }
      }
    }
    
     return {ans1,ans2};  
}

int main() {
  long long n,i;cin>>n;
  string s1,s2;cin>>s1>>s2;

  // cout<<gcdOfStrings2(s1,s2);

}

