class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int in =-1;
        int j = nums.size() ;
        for(int i =j-2; i>=0; i--){
            if(nums[i] < nums[i+1]){
                in = i;
                break;
            }
        }
        if(in == -1){
            reverse(nums.begin(), nums.end());
        }else{
            for(int i = j-1; i>=0; i--){
            if(nums[i] > nums[in]){
                swap(nums[i], nums[in]);
                break;
            }
        }
        reverse(nums.begin() + in + 1, nums.end());
        }
        
    }
};