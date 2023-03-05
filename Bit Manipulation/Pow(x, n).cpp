#include<bits/stdc++.h>  
using namespace std; 
#define ll long long int 

double myPow(double x, long long n) {
        

        if(n==0 || x==1)
            return 1;
        if(x==0)
            return 0;

        if(n<0)
            return myPow(1/x,abs(n));

        return (n%2==0 ? myPow(x*x,n/2) : x*myPow(x*x,n/2));
}


int main() {

  // cout<<pow(2,12)<<endl;

  double n;int i;cin>>n>>i;


  
 
  cout<<myPow(n,i);

 
}

