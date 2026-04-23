class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int Max = INT_MIN, sum=0;
        int j=nums.size();
        for(int i=0; i<j; i++){
            sum += nums[i];
            if(sum>Max){
                Max = max(sum, Max);
            }
            if(sum<0){
                sum=0;
            }
        }    
        return Max;
    }
};