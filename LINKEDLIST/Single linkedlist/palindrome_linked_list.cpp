#include<iostream>
#include<bits/stdc++.h>
using namespace std;


// **TC : o(n/2)+o(n/2) = o(n)
// **SC : o(n/2)+o(n/2) = o(n)

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

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseRecursive(ListNode *head)
    {
       if(head->next==NULL)
       {
            return head;
       }
       ListNode *newHead = reverseRecursive(head->next);
       head->next->next = head;
       head->next = NULL;
       return newHead;
    }

    bool isPalindrome(ListNode* head) {
        if(head==NULL && head->next==NULL)
        {
            return true;
        }
        //finding middle of node
        ListNode *s = head,*f = head;
        while(f!=NULL && f->next!=NULL)
        {
            s = s->next;
            f = f->next->next;
        }
        // pasing middle node ot reverse function which gives reverse linedlist starting from middle
        ListNode *temp2 =reverseRecursive(s);
        ListNode *temp1 = head;
        while(temp2!=NULL)
        {
            if(temp2->val!=temp1->val)
            {
                return false;
            }
    
               temp2 = temp2->next;
               temp1 = temp1->next;
           
        }
        return true;

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
   bool ans = obj.isPalindrome(head);
   cout << ans << endl;
   return 0;
}