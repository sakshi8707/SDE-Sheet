#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// **brute  approch**

#include <vector>

class CustomStack {
public:
    std::vector<int> vec;
    int size;
    int top = 0;

    CustomStack(int maxSize) {
        size = maxSize;
        vec.resize(size); // Resize the vector to the specified maxSize.
    }

    void push(int x) {
        // Check if the stack is not full before pushing.
        if (top < size) {
            vec[top] = x;
            top++;
        }
    }

    int pop() {
        // Check if the stack is not empty before popping.
        if (top > 0) {
            top--;
            return vec[top];
        } else {
            return -1; // Return -1 to indicate an empty stack.
        }
    }

    void increment(int k, int val) {
        // Increment the first 'k' elements of the stack by 'val'.
        for (int i = 0; i < k && i < top; i++) {
            vec[i] += val;
        }
    }
};




// **better approch**

class CustomStack {
public:
    std::vector<int> vec;
    int size;
    int top = 0;

    CustomStack(int maxSize) {
        size = maxSize;
        vec.reserve(maxSize); // Reserve memory for the vector but don't resize it.
    }

    void push(int x) {
        // Check if the stack is not full before pushing.
        if (top < size) {
            vec.push_back(x); // Use push_back to add elements to the end of the vector.
            top++;
        }
    }

    int pop() {
        // Check if the stack is not empty before popping.
        if (top > 0) {
            top--;
            int val = vec.back(); // Get the last element.
            vec.pop_back();       // Remove the last element.
            return val;
        } else {
            return -1; // Return -1 to indicate an empty stack.
        }
    }

    void increment(int k, int val) {
        // Increment the first 'k' elements of the stack by 'val'.
        int minK = std::min(k, top);
        for (int i = 0; i < minK; i++) {
            vec[i] += val;
        }
    }
};


int main()
{

  return 0;
}