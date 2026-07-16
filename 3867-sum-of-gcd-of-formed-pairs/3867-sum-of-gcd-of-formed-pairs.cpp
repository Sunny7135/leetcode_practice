class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n = nums.size();
      
        
        vector<long long>prefixgcd(n);
        int mx =0;
        for(int i =0; i<n; i++){
            mx = max(nums[i], mx);
            prefixgcd[i] = gcd(nums[i], mx);
        }
        sort(prefixgcd.begin(), prefixgcd.end());
        
        long long ans =0;
        for(int i=0; i<n/2; i++){
            ans += gcd(prefixgcd[i], prefixgcd[n-1-i]);
        }
        return ans;
    }
};