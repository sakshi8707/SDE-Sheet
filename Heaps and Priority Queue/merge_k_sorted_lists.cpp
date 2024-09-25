#include<bits/stdc++.h>
using namespace std;



class SinglyLinkedListNode {
    public:
        int data;
        SinglyLinkedListNode* next;

        SinglyLinkedListNode() {
            this->data = 0;
            this->next = NULL;
        }

        SinglyLinkedListNode(int data) {
            this->data = data;
            this->next = NULL;
        }

        SinglyLinkedListNode(int data, SinglyLinkedListNode* next) {
            this->data = data;
            this->next = next;
        }
};

class Solution {
public:
	SinglyLinkedListNode*  mergeKLists(vector< SinglyLinkedListNode* >& lists) {
		// Your code goes here
		int n = lists.size();
		if(n==NULL)
		{
			return NULL;
		}
		priority_queue<pair<int, SinglyLinkedListNode *>, vector<pair<int, SinglyLinkedListNode *>>, greater<pair<int, SinglyLinkedListNode *>>> minHeap;
		

		SinglyLinkedListNode *ans = NULL;
		SinglyLinkedListNode *head = NULL;

		// now inserting all lists to minHeap;
		for (int i = 0; i < n;i++)
		{
			if(lists[i]!=NULL)
			{
				minHeap.push({lists[i]->data, lists[i]});
			}
		}

		//after inserting , taking element from minHeap

		while(!minHeap.empty())
		{
			pair<int, SinglyLinkedListNode *> temp = minHeap.top();
			SinglyLinkedListNode *x = temp.second;
			SinglyLinkedListNode *n = x->next;
			x->next = NULL;

			//if x is null , it means starting node
			if(x==NULL)
			{
				ans = x;
				head = x;
			
			}
			else
			{
				ans = x->next;
				ans = ans->next;
			}
			x = n;
			if(x!=NULL)
			{
				minHeap.push({x->data, x});
			}
		}
		return head;
	}
};

int main(){
    


return 0;
}