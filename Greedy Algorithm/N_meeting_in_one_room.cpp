//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        int cnt = 1;
        vector<pair<int, int>> time;

        for (int i = 0; i < n;i++)
        {
          time.push_back({end[i],start[i]});
        }
        sort(time.begin(), time.end());
        int ending = time[0].first;
        for (int i = 1; i < n;i++)
        {
        // int  end = it[0];
        // int  st = it[1];
        if(ending < time[i].second)
        {
          cnt++;
          ending = time[i].first;
        }

        }
        return cnt;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends