class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>res;
        int mx =0;
        for(int i : candies){
            mx = max(mx, i);
        }
        for(int j : candies){
            if(j + extraCandies >= mx)res.push_back(true);
            else res.push_back(false);
        }
        return res;
    }
};