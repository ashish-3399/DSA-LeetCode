class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int r = grid.size();
        int c = grid[0].size();
        int sum = 0;
        while(grid[0].size() > 0) {
            vector<int> arr;
            for(int i = 0; i < r; i++) {
                auto maxi = max_element(grid[i].begin(), grid[i].end());
                int max_idx = std::distance(grid[i].begin(), maxi);
                arr.push_back(*maxi);
                grid[i].erase(grid[i].begin() + max_idx);
            }
            int res = *max_element(arr.begin(), arr.end());
            sum += res;
        }
        return sum;
    }
};