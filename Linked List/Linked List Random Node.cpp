#include <bits/stdc++.h>
using namespace std;

// class Solution {
// public:

//     ListNode *head=NULL;
//     Solution(ListNode* head) {
//         this->head=head;
//     }

//     int getRandom() {
//       int ans=0,i=1;
//       ListNode *p=this->head;

//       while(p){
//         if(rand()%i==0){
//           ans=p->val;
//         }

//         i++;

//         p=p->next;
//       }

//       return ans;
//     }
// };

int main()
{

  for (int i = 0; i < 5; i++)
    cout << rand() + rand() << " ";

  int t;
  cin >> t;

  while(t--){
    int n;cin>>n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
      /* code */
      cin>>arr[i];
    }
    
  }

  return 0;
}