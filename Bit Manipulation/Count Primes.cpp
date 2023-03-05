#include<bits/stdc++.h>  
using namespace std; 
#define ll long long int 

int countPrimes(int n) {

  if(n==0 || n==1) return 0;
    vector<bool> visited(n,0);
        int count = 0;
        for(int i=2;i<n;i++){
            if(visited[i]==true) continue;
            count++;
        // make all multiple of current prine as visited
            for(int j = i+i;j<n;j += i) visited[j] = 1;
        }
        return count;        
}


int main() {
  ll n,i;cin>>n;
  // string s;cin >>s;

  ll arr[n];

  for (ll i = 0; i < n; i++)
  {
    /* code */
    cin>>arr[i];
  }


  


}

