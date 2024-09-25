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

// **brute approch**
// class Solution {
// public:
//     int getDecimalValue(ListNode* head) {
//       ListNode *temp = head;
//       int i = 0;
//       string s;
//       int tempVal = 0;
//       if(head==NULL || head->next==NULL)
//         return tempVal;
//       while(temp!=NULL)
//       {
//         tempVal += (pow(2, i) * temp->val); 
//         i++;
//         temp = temp->next;
//       }
//       return tempVal;
//     }
// };
class Solution {
public:
    int getDecimalValue(ListNode* head) {
      int ans = 0;
      ListNode *temp = head;
      while (temp!=NULL)
      {
        ans *= 2;
        ans += (temp->val);
        temp = temp->next;
      }
      return ans;
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
   int ans = obj.getDecimalValue(head);
   cout << ans << endl;
   return 0;
}