#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int MOD = 1e9 + 7;

signed main(void)
{
  ll t;
  cin >> t;
  while (t--)
  {
    ll n, m;
        // for (ll i = 0; i < n; i++)
    // {
    //   cin >> hbg[i];
    //   if (!hbg[i])
    //   {
    //     eve++;
    //   }
    //   arr.push_back({hbg[i], i});
    // }
    cin >> n >> m;
    ll bgf[n];
        // for (ll i = 0; i < n; i++)
    // {
    //   cin >> hbg[i];
    //   if (!hbg[i])
    //   {
    //     eve++;
    //   }
    //   arr.push_back({hbg[i], i});
    // }
    ll hbg[n];
    vector<pair<ll, ll>> arr;
        // for (ll i = 0; i < n; i++)
    // {
    //   cin >> hbg[i];
    //   if (!hbg[i])
    //   {
    //     eve++;
    //   }
    //   arr.push_back({hbg[i], i});
    // }
    for (ll i = 0; i < n; i++)
    {
      cin >> bgf[i];
          // for (ll i = 0; i < n; i++)
    // {
    //   cin >> hbg[i];
    //   if (!hbg[i])
    //   {
    //     eve++;
    //   }
    //   arr.push_back({hbg[i], i});
    // }
    }
    ll eve = 0;
    for (ll i = 0; i < n; i++)
    {
      cin >> hbg[i];
          // for (ll i = 0; i < n; i++)
    // {
    //   cin >> hbg[i];
    //   if (!hbg[i])
    //   {
    //     eve++;
    //   }
    //   arr.push_back({hbg[i], i});
    // }
      if (!hbg[i])
      {
        eve++;
            // for (ll i = 0; i < n; i++)
    // {
    //   cin >> hbg[i];
    //   if (!hbg[i])
    //   {
    //     eve++;
    //   }
    //   arr.push_back({hbg[i], i});
    // }
      }
      arr.push_back({hbg[i], i});
    }
    for (ll i = 0; i < n; i++)
    {
      arr[i] = arr[bgf[i] - 1];
          // for (ll i = 0; i < n; i++)
    // {
    //   cin >> hbg[i];
    //   if (!hbg[i])
    //   {
    //     eve++;
    //   }
    //   arr.push_back({hbg[i], i});
    // }
    }
    set<ll> w1;
    set<ll> w2;
    for (ll i = 0; i < n; i++)
    {
      if (arr[i].first)
      {
        w1.insert(arr[i].first);
      }
      else
      {
        w2.insert(arr[i].second);
      }
    }
    if (w1.size() > 1)
    {
      cout << 0 << endl;
          // for (ll i = 0; i < n; i++)
    // {
    //   cin >> hbg[i];
    //   if (!hbg[i])
    //   {
    //     eve++;
    //   }
    //   arr.push_back({hbg[i], i});
    // }
    }
    else
    {
      // cout<<"w2.size() is "<<w2.size()<<endl;
      ll sz = (ll)w2.size();
      ll maxi = eve - sz;
      ll ans = 1;
      if (w1.size() == 0)
      {
        maxi++;
            // for (ll i = 0; i < n; i++)
    // {
    //   cin >> hbg[i];
    //   if (!hbg[i])
    //   {
    //     eve++;
    //   }
    //   arr.push_back({hbg[i], i});
    // }
      }
      for (ll i = 0; i < maxi; i++)
      {
        ans = (ans * m) % MOD;
            // for (ll i = 0; i < n; i++)
    // {
    //   cin >> hbg[i];
    //   if (!hbg[i])
    //   {
    //     eve++;
    //   }
    //   arr.push_back({hbg[i], i});
    // }
      }
      cout << ans << endl;
          // for (ll i = 0; i < n; i++)
    // {
    //   cin >> hbg[i];
    //   if (!hbg[i])
    //   {
    //     eve++;
    //   }
    //   arr.push_back({hbg[i], i});
    // }
    }
  }
}