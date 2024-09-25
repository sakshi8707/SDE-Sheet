#include<iostream>
#include<bits/stdc++.h>
using namespace std;


class SinglyLinkedListNode{
  public:
    int data;
    SinglyLinkedListNode *next;
    SinglyLinkedListNode(int val)
    {
      data = val;
      next = NULL;
    }
};

void insertAtTail(SinglyLinkedListNode*& head,int val)
{
    SinglyLinkedListNode *n = new SinglyLinkedListNode(val);
    if(head==NULL)
    {
      head = n;
      return;
    }
    SinglyLinkedListNode *temp = head;
    while(temp->next!=NULL)
    {
      temp = temp->next;
    }
    temp->next = n;
}

void print(SinglyLinkedListNode*  & head)
{
    SinglyLinkedListNode *temp = head;
    while(temp!=NULL)
    {
      cout << temp->data << " "
           << "->"
           << " ";
      temp = temp->next;
    }
    cout << endl;
}


    class Solution {
    public:
        SinglyLinkedListNode*  insert(SinglyLinkedListNode* & head, int insertVal) {
      SinglyLinkedListNode *insertNode = new SinglyLinkedListNode(insertVal);
      if(!head)
      {
        head = insertNode;
        head->next = head;
      }
      SinglyLinkedListNode *temp = head;
      while(true)
      {
        if(temp->next->data >=insertVal && temp->data <= insertVal) 
        {
          insertNode->next = temp->next;
          temp->next = insertNode;
          return head;
        }
        temp = temp->next;
        if(temp==head) 
        {
          break;
        }
      }

      //if not inserted then we inserting it at the end of
      insertNode->next = temp->next;
      temp->next = insertNode;
      return head;
    }
    };


int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n;i++)
   {
      int a;
      cin >> a;
      arr.push_back(a);
   }
   SinglyLinkedListNode* head = NULL;
   for (auto it : arr)
   {
      insertAtTail(head, it);
   }
   int insertVal;
   cin >> insertVal;
   print(head);
   Solution obj;   
    SinglyLinkedListNode* current = head;
    
  return 0;
}