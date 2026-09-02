class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low =1, j= piles.size()-1;
        int high=0;
        for(int i : piles){
            high = max(high, i);
        }
        while(low <= high){
            double mid = low + (high-low)/2;
            long long hours =0;
            for(int i : piles){
                hours += ceil(double(i)/mid);
            }
            if(hours > h){
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
        return low;
    }
};