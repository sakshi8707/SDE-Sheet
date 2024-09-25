#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class MyHashMap {
public:
  vector<int> mp;
  int size;
  MyHashMap()
  {
    size = 1e6 + 1;
    mp.resize(size);
    fill(mp.begin(), mp.end(), -1);
    }
    
    void put(int key, int value) {
    mp[key] = value;
    }
    
    int get(int key) {
    return mp[key];
    }
    
    void remove(int key) {
    mp[key] = -1;
    }
};


// **better approch : using chaining method  

// **better approch : using chaining method  
class MyHashMap {
public:
  vector<list<pair<int, int>>> mp;
  int size;
  MyHashMap()
  {
    size = 1000;
    mp.resize(size);
    }

    int hash(int key)
    {
    return key % size;
    }

    list<pair<int,int>> :: iterator  search(int key)
    {
    int i = hash(key);
    list<pair<int, int>>::iterator it = mp[i].begin();
    while(it!=mp[i].end())
      {
         if(it->first==key)
           return it;
           it++;
      }
      return it;
    }

    void put(int key, int value) {
      int i = hash(key);
      remove(key);
      mp[i].push_back({key, value});
    }
    
    int get(int key) {
      int i = hash(key);
      list<pair<int, int>>::iterator it = search(key);
      if(it!=mp[i].end())
      {
         return it->second;
      }
      else
      {
         return -1;
      }
    }
    
    void remove(int key) {
      int i = hash(key);
      list<pair<int, int>>::iterator it = search(key);
      if(it!=mp[i].end())
      {
      mp[i].erase(it);
      }
    }
};


int main()
{

  return 0;
}