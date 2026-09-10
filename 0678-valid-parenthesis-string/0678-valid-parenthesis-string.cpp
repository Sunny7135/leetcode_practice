class Solution {
public:
    bool checkValidString(string s) {
        int n = s.size();
        
        stack<int>st, st1;

        for(int i=0; i<n; i++){
            if(s[i] == '(')st.push(i);
            else if (s[i] == '*')st1.push(i);
            else
                if(!st.empty())st.pop();
                else if(!st1.empty()) st1.pop();
                else return false;
        }
        while(!st.empty() && !st1.empty()){
            if(st.top() > st1.top())return false;
            st.pop();   
            st1.pop();
        }

        return st.empty();
    }
};