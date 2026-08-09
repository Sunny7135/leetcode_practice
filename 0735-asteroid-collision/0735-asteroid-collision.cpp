class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        vector<int>ans;
        for(int i : asteroids){
            bool alive = true;
            while(alive && i <0 && !st.empty() && st.top() > 0){
                if(st.top() < -i){
                    st.pop();
                }else if(st.top() == -i){
                    st.pop();
                    alive =false;
                }else{
                    alive = false;
                }
            }    
            if(alive)st.push(i);
        }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};