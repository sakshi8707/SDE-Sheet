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

// **brute force approch**
// TC :

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp = new ListNode(-1);
        temp ->next = head;
        ListNode *p = temp, *c = temp->next;
        while(temp!=NULL)
        {
               if(c->val==c->next->val)
               {
                while(c->val!=c->next->val && temp!=NULL)
                {
                  c = c->next;
                }
               }
               c = c->next;
               p = c;
               c = c->next;
        }
        return head;
    }
};

// **better approch**
// TC: o(n)

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
       
        ListNode dummy = ListNode(0, head); // Create a dummy object
        ListNode p = dummy;
        while (head != NULL) {
            if (head->next != NULL && head->val == head->next->val) {
                while (head->next != NULL && head->val == head->next->val) {
                    head = head->next;
                }
                p.next = head->next; // Use dot operator to access next
            } else {
                p = p.next; // Use dot operator to access next
            }
            head = head->next;
        }
        return dummy.next; // Use dot operator to access next
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
  return 0;
}