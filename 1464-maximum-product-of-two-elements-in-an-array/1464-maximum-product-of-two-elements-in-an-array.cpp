class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int mx =0;
        int j=n-1;
        for(int i=n-2; i>=0; i--){
            int pro = (nums[i]-1)*(nums[j]-1);
            mx = max(mx, pro);
        }
        return mx;
    }
};