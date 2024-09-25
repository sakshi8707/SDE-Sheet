#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class ListNode{
  public:
    int val;
    ListNode *next;
    ListNode(int n)
    {
      val = n;
      next = NULL;
    }
};

void insertAtTail(ListNode *&head, int val)
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

void display(ListNode* head)
{
    ListNode *temp = head;
    while (temp!=NULL)
    {
      cout << temp->val << " -> "
           << " ";
      temp = temp->next;
    }
    cout <<"NULL"<< endl;
}

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
      ListNode *temp = head;
      ListNode *slow = head, *fast = head;
      if(head==NULL || head->next==NULL)
        return head;
      while(fast!=NULL && fast->next!=NULL)
      {
        slow = slow->next;
        fast = fast->next->next;
      }
      return slow;
      cout << slow << endl;
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
   for (auto it : arr)
   {
      insertAtTail(head, it);
   }
   display(head);
   Solution obj;
   ListNode* newNode = obj.middleNode(head);
   cout << newNode->val << endl;
   return 0;
}