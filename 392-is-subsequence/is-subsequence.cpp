class Solution {
public:
    bool isSubsequence(string s, string t) {
        int sn = 0, tn = 0;

        while(sn < s.size() && tn < t.size()) {
            if(s[sn] == t[tn]) sn++;
            tn++;
        }
        return sn == s.size();
    }
};