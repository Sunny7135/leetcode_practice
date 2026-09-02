class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int i =0, r = nums.size()-1;
        int ans =0;
        if(nums.size() == 1)return nums[0];
        while(i<=r){
            if(nums[i] == nums[i+1] && nums[r] == nums[r-1]){
                i++;
                r--;
            }    
            else if(nums[r] == nums[r-1]){
                ans = nums[i];
                break;
            }else{
                ans = nums[r];
                break;
            }
            i++;
            r--;
        }
        return ans;
    }
};