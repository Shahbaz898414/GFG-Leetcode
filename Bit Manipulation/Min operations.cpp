#include<bits/stdc++.h>  
using namespace std; 
#define ll long long int 

int solve(int a, int b) {
       if(a==b) return 0;

       if((a&b)==min(a,b)) return 1;


        if((a&b)>=0 and(a&b)<min(a,b)){
          return 2;
        }

        return 0;
}

int main() {
  long long n,i;cin>>n>>i;
  // string s;cin >>s;
  
 

 
  cout<<solve(n,i)<<endl;
  
}

