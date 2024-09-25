#include<iostream>
#include<bits/stdc++.h>
using namespace std;


// **brute using 2 stack**
class MyQueue {
public:
    stack<int> st1;
    stack<int> st2;
    
    MyQueue() {
        
    }
    
    void push(int x) {
        st1.push(x);
    }
    
    int pop() {
        if (st2.empty()) {
            while (!st1.empty()) {
                st2.push(st1.top());
                st1.pop();
            }
        }
        
        int ans = st2.top();
        st2.pop();
        return ans;
    }
    
    int peek() {
        if (st2.empty()) {
            while (!st1.empty()) {
                st2.push(st1.top());
                st1.pop();
            }
        }
        
        return st2.top();
    }
    
    bool empty() {
        return st1.empty() && st2.empty();
    }
};



int main()
{

  return 0;
}