#include<iostream>
#include<bits/stdc++.h>
using namespace std;


// **better approch**


class MyCircularQueue {
public:
    vector<int> arr;
    int size;
    int rear;
    int cnt;

    MyCircularQueue(int k) {
        size = k;
        arr.resize(size);
        rear = 0; // Initialize rear to 0
        cnt = 0;
    }

    bool enQueue(int value) {
        if (isFull()) {
            return false;
        } else {
            arr[rear] = value;
            rear = (rear + 1) % size; // Update rear and use modulo to wrap around
            cnt++;
            return true;
        }
    }

    int deQueue() {
        if (isEmpty()) {
            return -1;
        }
        int ans = arr[0];
        for (int i = 1; i < rear; i++) {
            arr[i - 1] = arr[i];
        }
        rear = (rear - 1 + size) % size; // Update rear and use modulo to wrap around
        cnt--;
        return ans;
    }

    int Front() {
        if (isEmpty()) {
            return -1;
        } else {
            return arr[0];
        }
    }

    int Rear() {
        if (isEmpty()) {
            return -1;
        } else {
            return arr[(rear - 1 + size) % size]; // Calculate the index of the rear element
        }
    }

    bool isEmpty() {
        return cnt == 0;
    }

    bool isFull() {
        return cnt == size;
    }
};

int main()
{

  return 0;
}
