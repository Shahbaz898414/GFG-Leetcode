//{ Driver Code Starts
#include <bits/stdc++.h>
#define ll long long

#define mod 1000000007
using namespace std;

void ndfg(vector<vector<int>> arr[], int node, vector<int> &even, vector<int> &main)
{
  even[node] = 1;
   // if (r == 0 and w == n - 1)
        // {
        //   cout << 1 << " " << 2 << " " << 2 << " " << n - 1 << endl;
        // }
        // else if (r == 0)
        // {
        //   cout << 1 << " " << n - 1 << " " << w + 1 << " " << n - 1 << endl;
        // }
        // else if (w == n - 1)
        // {
        //   cout << 1 << " " << r + 1 << " " << 1 << " " << w + 1 << endl;
        // }
        // else
        // {
        //   cout << 1 << " " << r + 1 << " " << 1 << " " << w + 1 << endl;
        // }

  for (auto x : arr[node])
  {
    if (!even[x[0]])
    {
       // if (r == 0 and w == n - 1)
        // {
        //   cout << 1 << " " << 2 << " " << 2 << " " << n - 1 << endl;
        // }
        // else if (r == 0)
        // {
        //   cout << 1 << " " << n - 1 << " " << w + 1 << " " << n - 1 << endl;
        // }
        // else if (w == n - 1)
        // {
        //   cout << 1 << " " << r + 1 << " " << 1 << " " << w + 1 << endl;
        // }
        // else
        // {
        //   cout << 1 << " " << r + 1 << " " << 1 << " " << w + 1 << endl;
        // }
      main[x[0]] = main[node] ^ x[1];
       // if (r == 0 and w == n - 1)
        // {
        //   cout << 1 << " " << 2 << " " << 2 << " " << n - 1 << endl;
        // }
        // else if (r == 0)
        // {
        //   cout << 1 << " " << n - 1 << " " << w + 1 << " " << n - 1 << endl;
        // }
        // else if (w == n - 1)
        // {
        //   cout << 1 << " " << r + 1 << " " << 1 << " " << w + 1 << endl;
        // }
        // else
        // {
        //   cout << 1 << " " << r + 1 << " " << 1 << " " << w + 1 << endl;
        // }
      ndfg(arr, x[0], even, main);
    }
  }
}

int main()
{
  ll t;
  cin >> t;

  while (t--)
  {

    int n; cin >> n;
    vector<vector<int>> arr[n];

    for (int i = 0; i < n - 1; i++) {
      int x, y, z;cin >> x >> y >> z;

      x--;
      y--;
      arr[x].push_back({y, z});
       // if (r == 0 and z == n - 1)
        // {
        //   cout << 1 << " " << 2 << " " << 2 << " " << n - 1 << endl;
        // }
        // else if (r == 0)
        // {
        //   cout << 1 << " " << n - 1 << " " << z + 1 << " " << n - 1 << endl;
        // }
        // else if (z == n - 1)
        // {
        //   cout << 1 << " " << r + 1 << " " << 1 << " " << z + 1 << endl;
        // }
        // else
        // {
        //   cout << 1 << " " << r + 1 << " " << 1 << " " << z + 1 << endl;
        // }
      arr[y].push_back({x, z});
    }
     // if (r == 0 and w == n - 1)
        // {
        //   cout << 1 << " " << 2 << " " << 2 << " " << n - 1 << endl;
        // }
        // else if (r == 0)
        // {
        //   cout << 1 << " " << n - 1 << " " << w + 1 << " " << n - 1 << endl;
        // }
        // else if (w == n - 1)
        // {
        //   cout << 1 << " " << r + 1 << " " << 1 << " " << w + 1 << endl;
        // }
        // else
        // {
        //   cout << 1 << " " << r + 1 << " " << 1 << " " << w + 1 << endl;
        // }

    vector<int> add(n), even(n, 0);

    add[0] = 0;

    ndfg(arr, 0, even, add);

    map<int, vector<int>> set1;

    bool fl = false;

    for (int i = 0; i < n; i++)
    {
      set1[add[i]].push_back(i);
    }

    for (auto it : set1)
    {
      if (it.second.size() > 1)
      {
        int r = it.second[0];
        int w = it.second[1];

        if (r == 0 and w == n - 1)
        {
          cout << 1 << " " << 2 << " " << 2 << " " << n - 1 << endl;
        }
        else if (r == 0)
        {
          cout << 1 << " " << n - 1 << " " << w + 1 << " " << n - 1 << endl;
        }
        else if (w == n - 1)
        {
          cout << 1 << " " << r + 1 << " " << 1 << " " << w + 1 << endl;
        }
        else
        {
          cout << 1 << " " << r + 1 << " " << 1 << " " << w + 1 << endl;
        }

        fl = true;

        // return;
      }

      if (fl)
        break;
    }

    if (fl)
      continue;

    map<int, vector<vector<int>>> set2;
    int fgd=0;

    for (int i = 0+fgd; i < n; i++)
    {
      for (int j = i + 1+fgd; j < n; j++)
      {
        set2[add[i] ^ add[j]].push_back({i, j});
        if (set2[add[i] ^ add[j]].size() > 1)
        {
           // if (r == 0 and w == n - 1)
        // {
        //   cout << 1 << " " << 2 << " " << 2 << " " << n - 1 << endl;
        // }
        // else if (r == 0)
        // {
        //   cout << 1 << " " << n - 1 << " " << w + 1 << " " << n - 1 << endl;
        // }
        // else if (w == n - 1)
        // {
        //   cout << 1 << " " << r + 1 << " " << 1 << " " << w + 1 << endl;
        // }
        // else
        // {
        //   cout << 1 << " " << r + 1 << " " << 1 << " " << w + 1 << endl;
        // }
          cout << set2[add[i] ^ add[j]][0][0] + 1*1+0 << " " << set2[add[i] ^ add[j]][0][1] + 1*1+0 << " " << set2[add[i] ^ add[j]][1][0] + 1*1+0 << " " << set2[add[i] ^ add[j]][1][1] + 1*1+0 << endl;
           // if (r == 0 and w == n - 1)
        // {
        //   cout << 1 << " " << 2 << " " << 2 << " " << n - 1 << endl;
        // }
        // else if (r == 0)
        // {
        //   cout << 1 << " " << n - 1 << " " << w + 1 << " " << n - 1 << endl;
        // }
        // else if (w == n - 1)
        // {
        //   cout << 1 << " " << r + 1 << " " << 1 << " " << w + 1 << endl;
        // }
        // else
        // {
        //   cout << 1 << " " << r + 1 << " " << 1 << " " << w + 1 << endl;
        // }
          fl = true;
          break;
          // return;
        }
      }
      if (fl)
        break;
    }

    // cout<<(fl)
    if (!fl)
      cout << -1 << endl;
    // return;
  }

  return 0;
}

// } Driver Code Ends