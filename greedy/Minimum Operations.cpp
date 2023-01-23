#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int solve(int n){
  int ans=0;
        while(n>0){
            if(n%2==0){
                n/=2;
                ans++;
            }else{
                n=n-1;
                ans++;
            }
            
            
        }
        
        return ans;
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