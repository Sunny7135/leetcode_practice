class Solution {
public:
    int largestRectangle(vector<int> &height){
        stack<int>st;
        int res =0; 

        for(int i=0; i<=height.size(); i++){
            int curr = (i == height.size()) ? 0 : height[i];
            while(!st.empty() && height[st.top()] > curr){
                int h = height[st.top()];
                st.pop();

                int b =0; 
                if(st.empty()){
                    b =i;
                }else{
                    b = i-st.top()-1;
                }
                res = max(res, b*h);
            } 
            st.push(i);
        }
        return res;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        int r = matrix.size();
        int c = matrix[0].size();

        vector<int>height(c, 0);
        int ans =0;
        for(int i=0; i<r; i++){
            for(int j = 0; j<c; j++){
                if(matrix[i][j] == '1')
                    height[j]++;
                else
                    height[j] = 0;
            }
            ans = max(ans, largestRectangle(height));
        }
        return ans;
    }
};