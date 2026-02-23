class Solution {
public:
    int check(vector<int>&nums, int k){
        int r =0, i=0, n=nums.size();
        int cnt=0;
        long long count=0;
        while(r<n){
            if(nums[r]%2==1)cnt++;
            while(cnt > k){
                if(nums[i]%2==1)cnt--;
                i++;
            }
            count += (r-i+1);
            r++;
        }
        return count;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
      return(check(nums, k) - check(nums, k-1));
    }
};