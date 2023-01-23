
#include<bits/stdc++.h>
using namespace std;


void findZeroes(int arr[], int n, int m)
{
	
	int wL = 0, wR = 0;

  int cnt=0,mx=INT_MIN;

	
	int bestL = 0, bestWindow = 0;

	
	int zeroCount = 0;

	
	while (wR < n)
	{
		
		if (zeroCount <= m)
		{
			if (arr[wR] == 0)
			zeroCount++;
			wR++;
		}


		if (zeroCount > m)
		{
			if (arr[wL] == 0)
			zeroCount--;
			wL++;
		}

		
		if ((wR-wL > bestWindow) && (zeroCount<=m))
		{
			bestWindow = wR-wL;
			bestL = wL;
		}
	}

	
	for (int i=0; i<bestWindow; i++)
	{
		if (arr[bestL+i] == 0)
		 arr[i+bestL]=1;
	}

  for (int i = 0; i < n; i++)
  {

    // cout<<arr[i]<<" ";
    if(arr[i]==1){
      cnt++;
    }else {

      mx=max(cnt,mx);
      cnt=0;
    }
  }

  mx=max(cnt,mx);

  // cout<<endl;


  cout<<mx<<endl;
  // return mx;
  
}


int main()
{
int arr[] = {1, 0, 0, 1, 1, 0, 1, 0, 1, 1,1};
int m = 2;
int n = sizeof(arr)/sizeof(arr[0]);
// cout << "Indexes of zeroes to be flipped are ";
findZeroes(arr, n, m);
return 0;
}
