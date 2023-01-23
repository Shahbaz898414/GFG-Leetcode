// C++ program to find GCD of two or
// more numbers
#include <bits/stdc++.h>
using namespace std;

// Function to return gcd of a and b
int gcd(int a, int b)
{
  if (a == 0)
    return b;
  return gcd(b % a, a);
}


int subarrayLCM(vector<int>& nums, int k) {

        int n=nums.size();
        int cnt=0;
        for (int i = 0; i < n; i++)
        {
          
          int curr=1;
          for (int j = i; j < n; j++) {
            
            curr=curr*nums[j]/gcd(curr,nums[j]);
            if(curr==k) cnt++;
            if(curr>k) break;
          }
        }

        return cnt;
        
         
}
int subarrayLCM2(int nums[], int k, int n)
{

  int cnt = 0;
  
}

// Function to find gcd of array of
// numbers

// Driver code
int main()
{
  int n, k;
  cin >> n >> k;
  // int arr[n];
  vector<int> arr(n);

  for (int i = 0; i < n; i++)
  {
    /* code */
    cin >> arr[i];
  }

  int ans = subarrayLCM(arr, k);

  cout << ans << endl;

  return 0;
}
