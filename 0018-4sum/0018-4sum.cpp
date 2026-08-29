class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<vector<int>>ans;
        int n = nums.size();
        for(int i=0; i<n-3; i++){
            if(i>0 && nums[i] == nums[i-1])continue;
            for(int j=i+1; j<n-2; j++){
                if(j>i+1 && nums[j] == nums[j-1])continue;
                int k = j+1;
                int x = n-1;
                while(k<x){
                    long long sum = (long long)nums[i]+nums[j]+nums[k] + nums[x];
                    if(sum == target){
                        ans.push_back({nums[i],nums[j],nums[k],nums[x]});
                        while(k<x && nums[k] == nums[k+1])k++;
                        while(k<x && nums[x] == nums[x-1])x--;
                    k++;
                    x--;
                    }else if(sum<target){
                        k++;
                    }else{
                        x--;
                    }
                }
            }
        }
        return ans;
    }
};