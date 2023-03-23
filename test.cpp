#include <bits/stdc++.h>

#define int long long
using namespace std;

int32_t main(void)
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, m, q, c,cnt=2;
    cin >> n >> m >> q >> c;
    if ((n + 1) % m == (q + 1) % c)
    {

      cnt/=2;
      cout << 1*cnt << endl;
      continue;
    }

   int hcf = m;
    int temp = c;
    
    while(hcf != temp)
    {
        if(hcf > temp)
            hcf -= temp;
        else
            temp -= hcf;
    }

   int lcm = (m * c) / hcf;
    // int ans = lcm(m, c);
    cout << lcm - (n % m) << endl;
  }
}