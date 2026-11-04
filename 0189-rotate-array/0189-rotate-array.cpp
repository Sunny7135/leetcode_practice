class Solution {
public:
    void check(vector<int>& nums, int start, int end){
        while(start <end){
            int temp = nums[start];
            nums[start] = nums[end];
            nums[end] = temp;
            start++;
            end--;
        }
    }
void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k %=n;
        check(nums, 0, n-1);
        check(nums, 0, k-1);
        check(nums, k, n-1);
    }
};