#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class ListNode{
  public:
    int data;
    ListNode *next;
    ListNode(int val)
    {
      data = val;
      next = NULL;
    }
}

void insertAtTail(ListNode* head , int val)
{
    ListNode *temp = head;
    ListNode *n = new ListNode(val);
    while(temp->next!=NULL)
    {
      temp = temp->next;
    }
    temp->next = n;
}

void display(ListNode* head)
{
    ListNode *temp = head;
    while(temp!=NULL)
    {
      temp 
    }
}

int main()
{

  return 0;
}