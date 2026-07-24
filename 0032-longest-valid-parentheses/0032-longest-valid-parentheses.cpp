class Solution {
public:
    void isValid(string s, int &cnt) {
        stack<int>st;

        st.push(-1);
        for(int i =0; i<s.size(); i++){
            if( s[i] == '('){
                st.push(i);
            }    
            else{
                st.pop();

                if(st.empty()){
                       st.push(i);
                }else{
                    cnt = max(cnt, i- st.top());
                }
            }
        }
    }  
    int longestValidParentheses(string s) {
        
        int cnt=0;
        isValid(s, cnt);
        return cnt;
        
    }
};