#include<bits/stdc++.h>  
using namespace std; 
#define ll long long int 



long long power(int N,int R) {
       //Your code here

       if(R==0) return 1;
          
        long long ans=(power(N, R/2));
        long long finalans=(ans*ans)%1000000007;
        if(R%2==1){
            return (finalans*N)%1000000007;
        }
        return finalans;  
        
}

long long rev(long long n) {
  long long rev_m=0;

  while(n>0){
    rev_m=rev_m*10+n%10;
    n=n/10;
  } 

  return rev_m;
}

int main() {

  // cout<<pow(2,12)<<endl;

  int n,i;cin>>n;


  long long r=0;

  r=rev(n);


  cout<<r<<endl;
 
  cout<<power(n,r);

 
}

