class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if(sum > num * 9) {
            return "";
        }
        int r = sum % 9;
        string str(sum / 9, '9');
        if(r > 0) {
            str.push_back(r + '0');
        }
        str.append(num - (int)str.size(), '0');
        return str;
    }
};