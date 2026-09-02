class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low =1, high =0;
        for(int i : weights){
            low = max(low, i);
            high += i;
        }

        while(low <= high){
            int mid = (low + high)/2;
            int sum =0, day=0;
            for(int i : weights){
                sum+=i;
                if(sum > mid){
                    day++;
                    sum = i;
                }
            }
            day++;
            if(day <= days){
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return low; 
    }
};