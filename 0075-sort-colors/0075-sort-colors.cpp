class Solution {
public:
    void sortColors(vector<int>& nums) {
        int j =0, i=0, k=nums.size()-1;
        while(j<=k){
            if(nums[j]== 0){
                swap(nums[j], nums[i]);
                j++;
                i++;
            }else if(nums[j] == 1){
                j++;
            }else{
                swap(nums[j], nums[k]);
                k--;
            }
        }
    }
};