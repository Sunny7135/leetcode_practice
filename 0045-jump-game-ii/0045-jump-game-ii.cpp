class Solution {
public:
    int jump(vector<int>& nums) {
        int mx = 0, mn=0, cnt=0;
        for(int i=0; i<nums.size()-1; i++){
            mx = max(mx, nums[i] +i);
            
            if(i == mn){
                cnt++;
                mn = mx;
            }
        }
        return cnt;
    }
};