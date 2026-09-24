class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int l=0, ans=0;
        long long sum=0;

        for(int i=0; i<nums.size(); i++){
            sum +=nums[i];

            while(1LL*nums[i]*(i-l+1) - sum > k){
                sum -= nums[l++];
            }
            ans = max(ans, i-l+1);
        }
        return ans;
    }
};