#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// **brute approch**
// class MyHashSet {
// public:
//       vector<int> m;
//       int size;
//     MyHashSet() {
//        size = 1e6+1;
//       m.resize(size);    
//     }
    
//     void add(int key) {
//         // m.push_back(key);
//         m[key] = 1;
//     }
    
//     void remove(int key) {
//         m[key] = 0;
//     }
    
//     bool contains(int key) {
//         return m[key];
//     }
// };

//**better approch(using linkedlist)**

class MyHashSet {
public:
  vector<list<int>> m;
  int size;
  
  MyHashSet()
    {
        size = 100;
        m.resize(size);
    }
    //hash function return the index by chaining method
    int hash(int key)
    {
        return key%size;
    }
    //making search function which indicate presence of no
    list<int> :: iterator search(int key)
    {
        int i = hash(key);
        return find(m[i].begin(), m[i].end(), key);
    }

        bool contains(int key) {
        int i = hash(key);
        if(search(key)!=m[i].end())
          return true;
        else
          return false;
    }

    void add(int key) {
         if(contains(key))
          return;
         int i = hash(key);
         m[i].push_back(key);
        }
    
    void remove(int key) {
         if(!contains(key))
          return;
         int i = hash(key);
         m[i].erase(search(key)); 
    }
    

};

int main()
{
  
  return 0;
}