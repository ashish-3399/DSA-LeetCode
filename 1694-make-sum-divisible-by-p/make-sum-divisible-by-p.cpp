class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        int n = nums.size(), res = n, need = 0, curr = 0;
        for(int num : nums) need = (need + num) % p;
        map<int, int> last = {{0, -1}};
        for(int i = 0; i < n; i++) {
            curr = (curr + nums[i]) % p;
            last[curr] = i;
            int x = (curr - need + p) % p;
            if(last.count(x))
                res = min(res, i - last[x]);
        }
        return res < n ? res : -1;
    }
};