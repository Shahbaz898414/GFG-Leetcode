#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int solve(vector<int> a){
  sort(a.begin(),a.end());
        
        int max1,max2;
        
        int n=a.size();
        
        max1=(a[0]*a[1]*a[n-1]);
        max2=(a[n-1]*a[n-2]*a[n-3]);
        
        int max3=max(max1,max2);
        
        return max3;
}
int main() {
	 
  vector<int> n;

  for (int i = 0; i < n.size(); i++) {
    /* code */
    int x;
    cin>>x;
    n.push_back(x);
  }

  cout<<solve(n)<<endl;
  
   
	return 0;
}