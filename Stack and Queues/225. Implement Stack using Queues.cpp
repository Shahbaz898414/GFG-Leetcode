#include<bits/stdc++.h>
using namespace std;

class MyStack {
public:

    queue<int> qu;

    // MyStack() {
        
    // }
    
    void push(int x) {
      qu.push(x) ;

      for (int i = 0; i < qu.size()-1; i++)
      {
        qu.push(qu.front());
        qu.pop();
      }


    
    }
    
    int pop() {
       qu.pop(); 
    }
    
    int top() {
       return qu.front(); 
    }
    
    bool empty() {
        return qu.empty();
    }
};
