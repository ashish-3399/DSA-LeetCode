class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        int l = -1;
        for(int r = 0; r <= n; r++) {
            if((r == n) || (s[r] == ' ')) {
                int sidx = l + 1;
                int eidx = r - 1;
                while(sidx < eidx) {
                    char temp = s[sidx];
                    s[sidx] = s[eidx];
                    s[eidx] = temp;
                    sidx++; eidx--;
                }
                l = r;
            }
        }
        return s;
    }
};