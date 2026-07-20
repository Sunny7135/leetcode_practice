class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int i =0, r = nums.size()-1;   
        while(i<=r){
            int mid = (i+r)/2;
            if(nums[mid] == target)return true;
            if(nums[i] == nums[mid] && nums[r] == nums[mid]){
                i++;
                r--;
            }
            else if(nums[i] <= nums[mid]){
                if(target >= nums[i] && target < nums[mid]){
                    r = mid-1;
                }else{
                    i = mid+1;
                }
            }else{
                if(target <= nums[r] && target > nums[mid]){
                    i = mid+1;
                }else{
                    r = mid-1;
                }
            }
        }
        return false;
    }
};