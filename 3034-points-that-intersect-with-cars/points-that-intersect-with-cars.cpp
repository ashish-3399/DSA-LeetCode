class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        vector<int> pre(102, 0);
        for(auto num : nums) {
            pre[num[0]]++;
            pre[num[1] + 1]--;
        }
        int up = 0, curr = 0;
        for(int i = 0; i < 102; i++) {
            curr += pre[i];
            if(curr > 0) up++;
        }
        return up;
    }
};