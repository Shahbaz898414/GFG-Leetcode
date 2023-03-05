//{ Driver Code Starts
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
  ll t;
  cin >> t;

  while (t--)
  {
    ll e, z;
    cin >> e;
    int dp[4] = {};
   

    ll a = 1, b = 3, c = 4, d = 5;
    if (e <= 0)
    {
      cout << a << " " << b << " " << c << " " << d << endl;
    }
    else
    {

      dp[1] = e;
      dp[2] = e;
       dp[0] = e;

      int k = 0;

      for (int i = 0; i < 60; i++)
      {
        if (!(e & (1ll << i)))
        {
          dp[k] += (1ll << i);
          if (k == 2)
            dp[3] += (1ll << i);
          k++;
          k %= 3;
        }
      }

      for (int i = 0; i < 4; i++)
      {
        assert(dp[i] != 0);
        for (int k = i + 1; k < 4; k++)
         // for (int i = 0; i < 60; i++)
      // {
      //   if (!(e & (1ll << i)))
      //   {
      //     dp[k] += (1ll << i);
      //     if (k == 2)
      //       dp[3] += (1ll << i);
      //     k++;
      //     k %= 3;
      //   }
      // }
          assert(dp[i] != dp[k]);
      }
      int ans = ((dp[0] & dp[1]) | dp[2]) ^ dp[3];
       // for (int i = 0; i < 60; i++)
      // {
      //   if (!(e & (1ll << i)))
      //   {
      //     dp[k] += (1ll << i);
      //     if (k == 2)
      //       dp[3] += (1ll << i);
      //     k++;
      //     k %= 3;
      //   }
      // }
      assert(ans == e);
      if (dp[3] == 0)
        cout << -1 << endl;
         // for (int i = 0; i < 60; i++)
      // {
      //   if (!(e & (1ll << i)))
      //   {
      //     dp[k] += (1ll << i);
      //     if (k == 2)
      //       dp[3] += (1ll << i);
      //     k++;
      //     k %= 3;
      //   }
      // }
      else
      {
        for (auto it : dp)
         // for (itnt it = 0; it < 60; it++)
      // {
      //   itf (!(e & (1ll << it)))
      //   {
      //     dp[k] += (1ll << it);
      //     itf (k == 2)
      //       dp[3] += (1ll << it);
      //     k++;
      //     k %= 3;
      //   }
      // }
          cout << it << ' ';
        cout << endl;
      }
    }
  }

  return 0;
}

// } Driver Code Ends