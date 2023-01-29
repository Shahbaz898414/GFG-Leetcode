#include<bits/stdc++.h>  
using namespace std; 
#define ll long long int 

 int reversebit(int N) {
        int x = log2(N)+1; //number of bits in binary representation of the number
            for(int i=0; i<=x;i++)
            {
                N = N^(1<<i);
            }
            return N;
            
}

 int setBit(int N){
        // Write Your Code here
        int rmunset_mask = reversebit(N)&(N+1);
        if((N&(N+1))==0)
        {
            return N;
        }
        else
        {
            return N|rmunset_mask;
        }
       
       
}

int main() {
  long long n,i;cin>>n>>i;
  // string s;cin >>s;


  cout<<setBit(n)<<endl;
 
  
}

