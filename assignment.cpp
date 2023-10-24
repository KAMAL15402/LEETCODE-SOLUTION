#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int maxMoves(vector<vector<int>>& grid) {
    int m = grid.size();
    int n = grid[0].size();
    vector<vector<int>> dp(m, vector<int>(n, 0));
    
    for (int j = n - 2; j >= 0; --j) {
        for (int i = 0; i < m; ++i) {
            for (int k = max(0, i - 1); k <= min(m - 1, i + 1); ++k) {
                if (grid[k][j + 1] > grid[i][j]) {
                    dp[i][j] = max(dp[i][j], dp[k][j + 1] + 1);
                }
            }
        }
    }
    
    int max_moves = 0;
    for (int i = 0; i < m; ++i) {
        max_moves = max(max_moves, dp[i][0]);
    }
    
    return max_moves;
}

int main() {
  vector<vector<int>>grid = {{3,2,4},{2,1,9},{1,1,7}};
  cout<<maxMoves(grid);
  return 0;
}
