class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxi = ranges::max(nums);
        int cnt = 0;
        for(int n : nums){
            cnt += maxi - n;
        }
        return cnt;
    }
};