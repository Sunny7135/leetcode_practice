class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        unordered_map<int, int>mp;
        for(int i=0; i<=nums.size()-k; i++){

            unordered_set<int>seen;
            for(int j =i; j<k+i; j++){
                seen.insert(nums[j]);
            }

            for(int x:seen){
                mp[x]++;
            }
        }

        int ans = -1;
        for(int i : nums){
            if(mp[i] == 1){
                ans = max(ans, i);
            }
        }
        return ans;
    }
};