class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i =0, r= nums.size()-1;
        while(i<=r){
            int mid = i+(r-i)/2;
            if(nums[mid] == target)return mid;
            if(nums[i] <= nums[mid]){
                if(target >= nums[i] && target <= nums[mid]){
                    r = mid-1;
                }else{
                    i = mid+1;
                }
            }else{
                if(target>=nums[mid] && target <=nums[r]){
                    i = mid+1;
                }else{
                    r = mid-1;
                }
            }
        }
        return -1;
    }
};