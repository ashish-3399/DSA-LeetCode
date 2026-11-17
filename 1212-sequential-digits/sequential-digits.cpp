class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int>arr;

        string s = "123456789";
        string l = to_string(low);
        string h = to_string(high);
        for(int i = l.size(); i <= h.size(); i++) {
            for(int j = 0; j <= 9 - i; j++) {
                string str = s.substr(j, i);
                int n = stoi(str);
                if(n >= low && n <= high) {
                    arr.push_back(n);
                }
            }
        }
        return arr;
    }
};