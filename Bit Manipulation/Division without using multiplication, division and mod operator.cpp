#include<bits/stdc++.h>  
using namespace std; 
#define ll long long int 
// leetcode
int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }
        long dvd = labs(dividend), dvs = labs(divisor), ans = 0;
        int sign = dividend > 0 ^ divisor > 0 ? -1 : 1;
        while (dvd >= dvs) {
            long temp = dvs, m = 1;
            while (temp << 1 <= dvd) {
                temp <<= 1;
                m <<= 1;
            }
            dvd -= temp;
            ans += m;
        }
        return sign * ans;
    }

long long divide(long long d, long long di)  {
        //code here
        return d/di;
}

int main() {
  // long long n,i;cin>>n>>i;
  // string s;cin >>s;


 


 
  
}

