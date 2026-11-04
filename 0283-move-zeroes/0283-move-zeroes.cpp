class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // int cnt = 0;
        // for(int x : nums){
        //     if(x == 0)cnt++;
        // }
        int j =0;
        for(int i =0; i<nums.size(); i++){
            // if(nums[i] == 0)j=i;
            if(nums[i] != 0){
                swap(nums[j], nums[i]);
                j++;
            }
        }
    }
};