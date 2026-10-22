class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        if(n <= 1) return 0;
        int idx0 = 0;
        for(int i = 0; i < n; i++) {
            if(nums[i] == 0) {
                idx0 = i; break;
            }
        }

        bool inc = true;
        for(int i = 0; i < n; i++) {
            if(nums[(idx0 + i) % n] != i) {
                inc = false; break;
            }
        }
        if(inc) {
            int op1 = idx0;
            int op2 = (idx0 == 0) ? 0 : (n - idx0) + 2;
            return min(op1, op2);
        }
        bool dec = true;
        for (int i = 0; i < n; i++) {
            if (nums[(idx0 - i + n) % n] != i) {
                dec = false;
                break;
            }
        }
        if(dec) {
            int op1 = 1 + (n-1-idx0);
            int op2 = (idx0 + 1) % n + 1;
            return min(op1, op2);
        }
        return -1;
    }
};