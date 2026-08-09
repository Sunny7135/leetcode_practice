class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>st;
        vector<int>ans;

        for(int i :asteroids){
            bool check = true;
            while(check && i<0 && !st.empty() && st.top() > 0){
                if(st.top() < -i){
                    st.pop();
                }else if(st.top() == -i){
                    st.pop();
                    check = false;
                }else{
                    check = false;
                }
            }
            if(check)st.push(i);
        }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};