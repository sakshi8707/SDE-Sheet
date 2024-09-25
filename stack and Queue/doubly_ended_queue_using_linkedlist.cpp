#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
  public:
    int data;
    Node *prev;
    Node *next;
    Node(int val)
    {
      data = val;
      prev = NULL;
      next = NULL;
    }
};

class Deque
{
  private:
    Node *front;
    Node *rear;
    int size;

  public:
  Deque(){
      front = NULL;
      rear = NULL;
      size = 0;
  }

  bool isEmpty()
  {
    //check whether it is empty or not
      return size == 0;
  }

  void insertFront(int data)
  {
      Node *newNode = new Node(data);
      if(isEmpty())
      {
        front = newNode;
        rear = newNode;
      }
      else
      {
        newNode->next = front;
        front->prev = newNode;
        front = newNode;
      }
      size++;
  }


  void insertRear(int data)
  {
      Node *newNode = new Node(data);
      if(isEmpty())
      {
        front = newNode;
        rear = newNode;
      }
      else
      {
        newNode->prev = rear;
        rear->next = newNode;
        rear = newNode;
      }
      size++;
  }

  int deleteFront()
  {
    if(isEmpty())
    {
        return -1;
    }
    int data = front->data;
    if(front==rear)
    {
        delete front;
        front = NULL;
        rear = NULL;
    }
    else
    {
        Node *temp = front;
        front = front->next;
        front->prev = NULL;
        delete temp;
    }
    size--;
    return data;
  }

  int deleteRear()
  {
    if(isEmpty())
    {
        return -1;
    }
        int data = rear->data;
    if(front == rear)
    {
        // delete front;
        delete rear;
        front = NULL;
        rear = NULL;
    }
    else
    {
        Node *temp = rear;
        rear = rear->prev;
        rear->next = NULL;
        delete temp;
    }
    size--;
    return data;
  }

  int getFront()
  {
     if(isEmpty())
     {    
        throw runtime_error("not found element");
     }
     return front->data;
  }

  int getRear()
  {
    if(isEmpty())
     {
        throw runtime_error("not found element");
     }
     return rear->data;
  }

  int getSize()
  {
     return size;
  }
};

int main()
{
  Deque obj;
    obj.insertFront(10);
    obj.insertFront(20);
    obj.insertFront(30);

    // Insert elements at the rear
    obj.insertRear(40);
    obj.insertRear(50);
    obj.insertRear(60);

    // Delete elements from the front
    cout << "Deleted element from front: " << obj.deleteFront() << endl;
    cout << "Deleted element from front: " << obj.deleteFront() << endl;

    // Delete elements from the rear
    cout << "Deleted element from rear: " << obj.deleteRear() << endl;
    cout << "Deleted element from rear: " << obj.deleteRear() << endl;
     cout << "Front element: " << obj.getFront() << endl;
    cout << "Rear element: " << obj.getRear() << endl;

    // Check if the deque is empty
    cout << "Is the deque empty? " << (obj.isEmpty() ? "Yes" : "No") << endl;

    // Get the size of the deque
    cout << "Size of the deque: " << obj.getSize() << endl;

  return 0;
}