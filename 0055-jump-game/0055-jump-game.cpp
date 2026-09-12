class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int step =0;
        for(int i=0; i<n; i++){
            if(i>step) return false;
            step = max(step, nums[i] +i);
            
        }
        return true;
    }
};