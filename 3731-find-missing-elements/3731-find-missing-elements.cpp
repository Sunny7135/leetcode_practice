class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        unordered_set<int>st;
        vector<int>ans;
        int mn =INT_MAX, mx=INT_MIN;
        for(int i=0; i<nums.size(); i++){
            mn = min(mn, nums[i]);
            mx = max(mx, nums[i]);
            st.insert(nums[i]);
        }
        for(int i =mn+1; i<mx; i++){
            if(!st.count(i)){
                ans.push_back(i);
            }
        }
        return ans;
    }
};