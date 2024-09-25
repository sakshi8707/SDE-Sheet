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
};

void insertAtTail(ListNode*& head,int val)
{
    ListNode *n = new ListNode(val);
    if(head==NULL)
    {
      head = n;
      return;
    }
    ListNode *temp = head;
    while(temp->next!=NULL)
    {
      temp = temp->next;
    }
    temp->next = n;
}

void print(ListNode *head)
{
    ListNode *temp = head;
    while(temp!=NULL)
    {
      cout << temp->data << " "
           << "->"
           << " ";
      temp = temp->next;
    }
    cout << endl;
}

//**delete node from linkedlist
    class Solution {
    public:
        void deleteNode(ListNode* node) {
          if(node==NULL && node->next==NULL)  return;
           swap(node->data,node->next->data);
           node->next = node->next->next; 
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
   ListNode* head = NULL;
  //  head = NULL;
   for (auto it : arr)
   {
      insertAtTail(head, it);
   }
   int val;
   cin >> val;
   print(head);
   Solution obj;   
    ListNode* current = head;
    while (current != NULL) {
        if (current->data == val) {
            obj.deleteNode(current);
            break;
        }
        current = current->next;
    }
   print(head);
   return 0;
}