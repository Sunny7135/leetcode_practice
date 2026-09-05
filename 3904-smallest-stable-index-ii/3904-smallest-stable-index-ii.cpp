class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<long long>res(n);
        res[n-1] = nums[n-1];

        for(int i = n-2; i>=0; i--){
            res[i] = min((long long)nums[i], res[i+1]);
        }
        
        long long mx = INT_MIN;
        for(int i=0; i<n; i++){
            mx = max(mx, (long long)nums[i]);

            if(mx - res[i] <=k){
                return i;
            }
        }
        return -1;
    }
};