class Solution {
public:
    int jump(vector<int>& nums) {
        int step=0, mn=0, cnt =0;
        for(int i=0; i<nums.size()-1; i++){
            step = max(step, nums[i]+i);

            if(mn == i){
                cnt++;
                mn = step;
            }
        }
        return cnt;
    }
};