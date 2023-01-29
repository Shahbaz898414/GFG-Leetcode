#include<bits/stdc++.h>  
using namespace std; 
#define ll long long int 

int solve(int n){
    int x = 0;
    while ((1<<x) <= n)
        x++;
    
        return x-1;
    }

    int countSetBits(int n)
    {
        // Your logic here
        if(n == 0) return 0;
        int x = solve(n), bitTill2x = (1<<(x-1))*x, bits2xton = (n - (1<<x)) + 1, rest = countSetBits(n-(1<<x));
        return bitTill2x + bits2xton + rest;
    }

int main() {
  long long n,i;cin>>n;
  // string s;cin >>s;
  
 

 
  // cout<<endl;
  
}

