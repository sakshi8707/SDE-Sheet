#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class MyCircularQueue {
    class Node {
        int val;
        Node next;
        Node(int val) {
            this.val = val;
            next = null;
        }
    }
    int k;
    int size = 0;
    Node head;
    Node tail;
    public MyCircularQueue(int k) {
        this.k = k;
        head = null;
        tail = null;
    }
    
    public boolean enQueue(int value) {
        if(size < k) {
            size++;
            Node new_node = new Node(value);
            if(head == null) {
                head = new_node;
                tail = new_node;
                return true;
            } 
            tail.next = new_node;
            tail = tail.next;
            return true;
        }
        return false;
    }
    
    public boolean deQueue() {
        if(head == null) return false;
        head = head.next;
        if(head == null) {
            tail = null;
        }
        size--;
        return true;
    }
    
    public int Front() {
        if(head == null)  return -1;
        return head.val;
    }
    
    public int Rear() {
        if(head == null) return -1;
        return tail.val;
    }
    
    public boolean isEmpty() {
        return (head == null);
    }
    
    public boolean isFull() {
        return size == k;
    }
}

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue obj = new MyCircularQueue(k);
 * boolean param_1 = obj.enQueue(value);
 * boolean param_2 = obj.deQueue();
 * int param_3 = obj.Front();
 * int param_4 = obj.Rear();
 * boolean param_5 = obj.isEmpty();
 * boolean param_6 = obj.isFull();
 */

int main()
{

  return 0;
}