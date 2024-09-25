#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class ListNode{
  public:
    int val;
    ListNode* next;
    ListNode(int v){
      val = v;
      next = NULL;
    }
};
void insertAtTail(ListNode* head,int val)
{
    ListNode *n = new ListNode(val);
    ListNode *temp = head;
    if(head==NULL)
    {
      return;
    }
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
      cout << temp->val << " "
           << "->";
      temp = temp->next;
    }
    cout << "NULL";
}

// **brute approch**
// TC : o(n)

class Solution {
public:
    int getDecimalValue(ListNode* head) {
        ListNode* temp = head;
        if (temp == nullptr) return 0;
        
        // Initialize an empty string
        string binaryStr = "";
        
        // Traverse the linked list and append '0' or '1' characters to the string
        while (temp != nullptr) {
            binaryStr += (temp->val == 0) ? '0' : '1';
            temp = temp->next;
        }
        
        // Convert the binary string to an integer using stoi
        int decimalValue = stoi(binaryStr, 0, 2);
        
        return decimalValue;
    }
};


int main()
{

  return 0;
}