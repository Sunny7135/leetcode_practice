class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt =0, curr= 0;
        for(int num : nums){
            if(cnt == 0){
                curr = num;
            }
            
            if(curr == num){
                cnt++;
            }else{
                cnt--;
            }
        }
    return curr;
    }
};