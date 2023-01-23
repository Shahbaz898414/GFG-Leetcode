#include <bits/stdc++.h>
using namespace std;




  //  5 2 4 7 1 8 0
  // -5 -2 -2
void stockBuySell(int price[], int n)
{
    
    if (n == 1)
        return;
 
    
    int i = 0;
    while (i < n - 1) {
 
       
      while ((i < n - 1) && (price[i + 1] <= price[i]))
            i++;
       
        if (i == n - 1)
            break;
        int buy = i++;
       
        while ((i < n) && (price[i] >= price[i - 1]))
            i++;
        int sell = i - 1;
 
        cout  << buy<< " " << sell << endl;
    }
}

// Driver code
int main() {
  int n;cin>>n;
  int a[n];

  vector<int> v;

  int cnt0=0,cnt1=0,cnt2=0;
  map<int,int> mp;
  for (int i = 0; i <n; i++) {
    cin>>a[i];
   
  }
  // stockBuySell(a,  n);
  // rearrange(a, n);

  // for (int i = 0; i <n; i++) {
  //   cout<<a[i]<<" ";
  // }
  
  int x = INT_MAX, y=0;

        for(int i=0;i<n;i++) {
            x = min(a[i], x);

            y = max(y, a[i]-x);

            // cout<<x<<" "<<y<<endl;
        }
  cout<< y;

  

  
 
  return 0;
}
