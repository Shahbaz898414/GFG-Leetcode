#include <bits/stdc++.h>
using namespace std;



class MinStack {
public:
    stack<pair<int,int>>st;
    MinStack() {
    }
    
    void push(int val) {
        if(!st.empty()){
             int mini=min(st.top().second,val);
             st.push({val,mini});
        }
        else st.push({val,val});
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top().first;
    }
    
    int getMin() {
        return st.top().second;
    }
};





