class Solution {
public:
    long long dfs(int i, int j, vector<vector<int>>& grid, vector<vector<int>>& vis, int m, int n) {
        if(i < 0 || i >= m || j < 0 || j >= n || vis[i][j] || grid[i][j] == 0) return 0;
        vis[i][j] = true;
        long long sum = grid[i][j];
        sum += dfs(i - 1, j, grid, vis, m, n);
        sum += dfs(i + 1, j, grid, vis, m, n);
        sum += dfs(i, j - 1, grid, vis, m, n);
        sum += dfs(i, j + 1, grid, vis, m, n);
        return sum;
    }
    int countIslands(vector<vector<int>>& grid, int k) {
        int rs = grid.size();
        int cs = grid[0].size();
        int cnt = 0;
        vector<vector<int>> vis(rs, vector<int>(cs, false));
        for(int i = 0; i < rs; i++) {
            for(int j = 0; j < cs; j++) {
                if(grid[i][j] > 0 && !vis[i][j]) {
                    long long sum = dfs(i, j, grid, vis, rs, cs);
                    if(sum % k == 0) cnt++;
                }
            }
        }
        return cnt;
    }
};