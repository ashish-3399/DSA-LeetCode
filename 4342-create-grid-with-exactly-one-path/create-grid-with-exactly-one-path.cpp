class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string> res(m);
        res[0] = string(n, '.');
        string r = string(n-1, '#') + '.';
        for(int i = 1; i < m; i++) {
            res[i] = r;
        }
        return res;
    }
};