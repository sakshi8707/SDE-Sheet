#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> candyCrush(vector<vector<int>>& board) {
        int m = board.size();
        int n = board[0].size();
        bool needCrush = false;

        // 1st traversal - Crush horizontally
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n - 2; j++) {
                if (abs(board[i][j]) == abs(board[i][j + 1]) && abs(board[i][j]) == abs(board[i][j + 2]) && board[i][j] != 0) {
                    board[i][j] = board[i][j + 1] = board[i][j + 2] = -abs(board[i][j]);
                    needCrush = true;
                }
            }
        }

        // 2nd traversal - Crush vertically
        for (int j = 0; j < n; j++) {
            for (int i = 0; i < m - 2; i++) {
                if (abs(board[i][j]) == abs(board[i + 1][j]) && abs(board[i][j]) == abs(board[i + 2][j]) && board[i][j] != 0) {
                    board[i][j] = board[i + 1][j] = board[i + 2][j] = -abs(board[i][j]);
                    needCrush = true;
                }
            }
        }

        // Gravity - Move candies down
        for (int j = 0; j < n; j++) {
            int anchor_i = m - 1;
            for (int i = m - 1; i >= 0; i--) {
                if (board[i][j] > 0) {
                    board[anchor_i][j] = board[i][j];
                    anchor_i--;
                }
            }
            for (int i = anchor_i; i >= 0; i--) {
                board[i][j] = 0;
            }
        }

        // If candies were crushed, call the function recursively
        if (needCrush) {
            return candyCrush(board);
        }

        return board;
    }
};

int main() {
    // Create a board and test the candyCrush function
    vector<vector<int>> board = {
        {110, 5, 112, 113, 114},
        {210, 211, 5, 213, 214},
        {310, 311, 3, 313, 314},
        {410, 411, 412, 5, 414},
        {5, 1, 512, 3, 3},
        {610, 4, 1, 613, 614},
        {710, 1, 2, 713, 714},
        {810, 1, 2, 1, 1},
        {1, 1, 2, 2, 2},
        {4, 1, 4, 4, 1014}
    };

    Solution sol;
    vector<vector<int>> result = sol.candyCrush(board);

    // Print the result
    for (const vector<int>& row : result) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
