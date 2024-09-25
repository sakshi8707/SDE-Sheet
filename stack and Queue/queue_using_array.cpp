#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#include <iostream>
using namespace std;

class ArrayQueue {
private:
    int maxSize;
    int front;
    int rear;
    int* array;  //taking array to store value

public:
    ArrayQueue(int capacity) {
        maxSize = capacity;
        front = 0;
        rear = -1;
        array = new int[maxSize];
    }

    void push(int data) {
        if (rear == maxSize - 1) {
            cout << "Queue is full!" << endl;
            return;
        }
        array[++rear] = data;
    }

    int pop() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return -1;
        }
        int data = array[front++];
        if (front > rear) { // Reset indices when the queue becomes empty
            front = 0;
            rear = -1;
        }
        return data;
    }

    int peek() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return -1;
        }
        return array[front];
    }

    bool isEmpty() {
        return rear == -1;
    }

    int size() {
        if (isEmpty()) {
            return 0;
        }
        return rear - front + 1;
    }
};

int main() {
    ArrayQueue q(10);

    // push elements
    q.push(10);
    q.push(20);
    q.push(30);

    // pop an element
    q.pop();

    // Access the front element
    int frontElement = q.peek();
    std::cout << "frontElement : " << frontElement << std::endl;

    // Check if the queue is empty
    bool isEmpty = q.isEmpty();
    std::cout << "isEmpty : " << isEmpty << std::endl;

    // Get the size of the queue
    int size = q.size();
    std::cout << "size : " << size << std::endl;

    return 0;
}



int main()
{

  return 0;
}