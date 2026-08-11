class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int>st;
        int mx=0; 
        for(int i=0; i<=heights.size(); i++){
            
            int res = (i == heights.size()) ? 0 : heights[i];

            while(!st.empty() && heights[st.top()] > res){
                int h = heights[st.top()];
                st.pop();

                int b = 0;
                if(st.empty()){
                    b=i;
                }else{
                    b = i - st.top() - 1;
                }
                mx = max(mx, b*h);
            }
            st.push(i);
        }
        return mx;
    }
};