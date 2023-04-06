#include <bits/stdc++.h>
using namespace std;

long long makeSubKSumEqual(vector<int>& arr, int k) {



}


class Solution {
  public:
    long long int minOperations(int N) {
        long long int  last=2*(N-1)+1;
        long long  mid=(last+1)/2;
        
        if(mid%2==0) return mid*mid/4;
        
        return  (mid-1)*(mid+1)/4;   
    }
};


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.minOperations(n) << endl;
    }
    return 0;
}
