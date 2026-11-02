class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string>st;
        for(string &email : emails){
            string cmail;
            for(char c : email) {
                if(c == '+' || c == '@') break;
                if(c == '.') continue;
                cmail += c;
            }
            cmail += email.substr(email.find('@'));
            st.insert(cmail);
        }
        return st.size();
    }
};