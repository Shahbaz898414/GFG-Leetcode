#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 1000000 + 10;
const int MOD = 1e9 + 7;
const int inf = 1e18;

signed main()
{
  int T;
  cin >> T;
  while (T--)
  {
    int n;
    
    string str;
    cin >> n >> str;
    int i = 0, j = n - 1;
    string qws = str;
    reverse(qws.begin(), qws.end());
    if (str == qws) {
      cout<<"Yes"<<endl;
      continue;
    }
    while (i <= j)
    {
      if (str[i] == str[j])
      {
        i++, j--;
      }
      else
      {
        break;
      }
    }
    while (i <= j)
    {
      if (str[i] != str[j])
      {
        str[i] = str[j];
        i++, j--;
      }
      else
      {
        break;
      }
    }
    qws = str;
    reverse(qws.begin(), qws.end());

    cout<<((str==qws)?"Yes":"No")<<endl;
    
    
  }

  return 0;
}