#include <bits/stdc++.h>
using namespace std;

void fn(vector<vector<int>> arr[], int node, vector<int> &even, vector<int> &dis)
{
  even[node] = 1;

  for (auto x : arr[node])
  {
    if (!even[x[0]])
    {
      dis[x[0]] = dis[node] ^ x[1];
      fn(arr, x[0], even, dis);
    }
  }
}

void solve()
{
  int n;
  cin >> n;
  vector<vector<int>> arr[n];

  for (int i = 0; i < n - 1; i++)
  {
    int u, v, w;
    cin >> u >> v >> w;

    u--;
    v--;
    arr[u].push_back({v, w});
    arr[v].push_back({u, w});
  }

  vector<int> add(n), even(n, 0);

  add[0] = 0;

  fn(arr, 0, even, add);

  map<int, vector<int>> set1;

  bool fl = false;

  for (int i = 0; i < n; i++)
  {
    set1[add[i]].push_back(i);
  }

  for (auto x : set1)
  {
    if (x.second.size() > 1)
    {
      int r = x.second[0];
      int w = x.second[1];

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
    return;

  map<int, vector<vector<int>>> set2;

  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      set2[add[i] ^ add[j]].push_back({i, j});
      if (set2[add[i] ^ add[j]].size() > 1)
      {
        cout << set2[add[i] ^ add[j]][0][0] + 1 << " " << set2[add[i] ^ add[j]][0][1] + 1 << " " << set2[add[i] ^ add[j]][1][0] + 1 << " " << set2[add[i] ^ add[j]][1][1] + 1 << endl;
        fl=true;
        break;
        // return;
      }
    }
    if(fl) break;
  }

  // cout<<(fl)
  if(!fl) cout<<-1<<endl;
  return;

  // cout << -1 << endl;
}
int32_t main()
{

  int t;
  t = 1;
  cin >> t;
  while (t--)
  {
    int n;cin>>n;

    int arr[n];

    int od=0,ev=0;

    for (int i = 0; i < n; i++)
    {
      
      cin>>arr[i];
    }

    for (int i = 0; i < n; i++)
    {
      /* code */
      if(arr[i]%2) od++;
      else ev++;
    }

    if((od>ev) and od%2) cout<<"NO"<<endl;
    else {
      if(ev=0 and n%2){
        cout<<"NO"<<endl;
      }else{
        if(od==ev)  cout<<"YES"<<endl;
        else if(od==0) cout<<"YES"<<endl;
        else if((od>ev) and od%2==0)  cout<<"YES"<<endl;
        else if(ev>od and ev%2!=0 and od%2==0){
          cout<<"YES"<<endl;
        }else if(ev>od and ev%2==0 and od%2==1){
            cout<<"NO"<<endl;
        }
      }
    }
    
    
  }
  return 0;
} // c8kbf and Tree