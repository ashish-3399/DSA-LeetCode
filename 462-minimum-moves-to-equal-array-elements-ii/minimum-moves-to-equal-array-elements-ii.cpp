class Solution {
public:
    int minMoves2(vector<int>& nums) {
        auto mid = nums.begin() + nums.size() / 2;
        ranges::nth_element(nums, mid);
        int med = *mid, mov = 0;
        for (int x : nums) mov += abs(x - med);
        return mov;
    }
};