class Solution {
public:
    int almost(vector<int>&nums, int goal){
            if(goal<0)return 0;
        int r=0, l=0, n = nums.size();
        int i=0;
        int count =0;
        while(r<n){
            l+=nums[r];
            while(l>goal){
                l -= nums[i];
                i++;
            }
            count += (r-i+1);
            r++;
        }
        return count;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return(almost(nums, goal)- almost(nums, goal-1));
    }    
};