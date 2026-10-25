class Solution {
public:
    vector<int> constructRectangle(int area) {
        vector<int> arr; 
        int curr_diff = INT_MAX, curr_l, curr_w;
        for(int i = area; i > 0 ;i--) {
            if((area % i) == 0 && (area / i) <= i) {
                if((i - (area / i)) < curr_diff) {
                    curr_diff = (i - (area / i));
                    curr_l = i; curr_w = area / i;
                }
            }
        }
        arr.push_back(curr_l);
        arr.push_back(curr_w);
        return arr;
    }
};