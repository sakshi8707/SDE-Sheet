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


class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL)
        {
            return head;
        }
        ListNode *p = NULL,*c = head,*n = head->next;
        while(c!=NULL)
        {
            c->next = p;
            p = c;
            c = n;
            if(n!=NULL)
            {
                n = n->next;
            }
        } 
        return p;
    }
    
}; 

class Solution2 {
public:
    ListNode* recursive(ListNode *head)
    {
       if(head->next==NULL)
       {
            return head;
       }
       ListNode *newHead = recursive(head->next);
       head->next->next = head;
       head->next = NULL;
       return newHead;
    }


    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
        return recursive(head);
    }

};

int main()
{

  return 0;
}