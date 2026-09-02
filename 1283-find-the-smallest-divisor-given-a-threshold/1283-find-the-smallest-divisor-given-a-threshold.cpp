class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low =1, high =0;
        for(int i : nums)high = max(high, i);
        while(low <= high){
            int sum =0;
            int mid = (low + high)/2;
            for(int i : nums){
                sum += (i +mid -1)/mid;
            }
            if(sum > threshold){
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
        return low;
    }
};