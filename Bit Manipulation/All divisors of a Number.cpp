#include<bits/stdc++.h>  
using namespace std; 
#define ll long long int 

void print_divisors(int n) {
    vector<int> v;
        for (int i=1; i<=sqrt(n); i++){
            if (n%i == 0){
               
                if (n/i == i)
                    v.push_back(i);
      
                else {
                    // cout << " "<< i << " " << n/i;
                    v.push_back(i);
                    v.push_back(n/i);
                }
            }
        }
        
        sort(v.begin(),v.end());
        
        
        for(auto it:v){
            cout<<it<<" ";
        }
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

