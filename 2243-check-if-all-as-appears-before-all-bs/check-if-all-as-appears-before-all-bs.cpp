class Solution {
public:
    bool checkString(string s) {
        int fbi = -1, n = s.size();
        for(int i = 0; i < n; i++) {
            if(s[i] == 'b') {
                fbi = i; break;
            }
        }
        if(fbi == -1 && s[0] == 'a') return true;
        for(int i = fbi; i < n; i++) {
            if(s[i] == 'a') return false;
        }
        return true;
    }
};