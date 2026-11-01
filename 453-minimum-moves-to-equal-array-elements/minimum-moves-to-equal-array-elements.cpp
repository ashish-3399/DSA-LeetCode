class Solution {
public:
    int minMoves(vector<int>& nums) {
        int low = ranges::min(nums), x = 0;
        for(int n : nums) x += n - low;
        return x;
    }
};