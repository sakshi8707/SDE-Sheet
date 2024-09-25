#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// **brute approch**
#include <queue>
using namespace std;

class HitCounter {
public:
    queue<int> hits;

    HitCounter() {

    }

    // Record a hit at the specified timestamp.
    void hit(int timestamp) {
        hits.push(timestamp);
    }

    // Get the number of hits within the last 'seconds' time window.
    int getHits(int timestamp) {
        while (!hits.empty() && timestamp - hits.front() >= 300) {
            // Remove hits that are older than 300 seconds (5 minutes).
            hits.pop();
        }
        return hits.size();
    }
};



int main()
{

  return 0;
}