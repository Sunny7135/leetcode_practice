class Solution {
public:
    int minEatingSpeed(vector<int>&piles, int h){
        int low=1, high =0;
        for(int i : piles){
            if(i>high)high =i;
        }
        while(low<=high){
            int mid = low + (high-low)/2;
            long long hours = 0;

            for(int i : piles){
                hours += ceil((double)i/ mid);
            }
            // if(hours == h)return low;
            if(hours > h){
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
        return low;
    }
};