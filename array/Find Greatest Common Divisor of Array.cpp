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

// Function to find gcd of array of
// numbers
int findGCD(int arr[], int n)
{
int result = arr[0];
for (int i = 1; i < n; i++)
{
	result = gcd(arr[i], result);

	if(result == 1)
	{
	return 1;
	}
}
return result;
}

// Driver code
int main()
{
int n;cin>>n;
int arr[n];

for (int i = 0; i < n; i++)
{
  /* code */
  cin>>arr[i];

}

cout << findGCD(arr, n) << endl;
return 0;
}
