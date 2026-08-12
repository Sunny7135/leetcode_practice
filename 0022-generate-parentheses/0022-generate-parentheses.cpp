class Solution {
public:
    vector<string>check(int n, int open, int close, string s, vector<string>&ans){
        if(s.length() == 2*n){
            ans.push_back(s);
            return ans;
        }

        if(open<n){
            check(n, open +1, close, s+"(" , ans);
        }

        if(close<open){
            check(n, open, close+1, s+")", ans);
        }
        return ans;
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        check(n, 0, 0, "", ans);
        return ans;
    }
};