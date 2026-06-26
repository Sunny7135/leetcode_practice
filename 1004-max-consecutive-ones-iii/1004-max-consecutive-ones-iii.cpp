class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int i =0, r=0, len=0;
        int n = nums.size();
        int cnt=0;
        while(r<n){
            if(nums[r] == 0)cnt++;
            if(cnt > k){
                if(nums[i]==0)cnt--;
                i++;
            }
            int mx = r-i+1;
            len = max(mx, len);
            r++;
        }
        return len;
    }
};