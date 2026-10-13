class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums1) {
        int n = nums1.size(); long long ans = 0;
        vector<long long> nums(n);
        for(int i = 0; i < n; i++) {
            nums[i] = nums1[i] * nums1[i] * 1LL;
        }
        sort(nums.begin(), nums.end());
        
        int l = 0, r = n - 1;
        while(l <= r) {
            if(l == r) {ans += nums[r]; break;}
            ans += nums[r] - nums[l];
            l++; r--;
        }
        return ans;
    }
};