class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int>hash;
        for(int i:nums){
            hash[i]++;
        }
        for(int i : nums){
            if(hash[i]>1)return true;
        }
        return false;
    }
};