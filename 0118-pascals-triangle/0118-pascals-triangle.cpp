class Solution {
public:
    vector<int>generating(int row){
        long long ans=1;
        vector<int>anss;
        anss.push_back(1);
        for(int i=1; i<row; i++){
            ans = ans*(row-i);
            ans = ans/i;
            anss.push_back(ans);
        }
        return anss;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for(int i=1; i<=numRows; i++){
            ans.push_back(generating(i));
        }
        return ans;
       
    }
};