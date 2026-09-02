class Solution {
public:
    bool check(vector<int>&ans, int days, int m, int k){
        int cnt=0, num =0;
        for(int i:ans){
            if(i <= days){
                cnt++;
            }else{
                num += cnt/k;
                cnt=0;
            }
        }
        num += cnt/k;
        return num >= m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int low =0, high =0;
        long long res = m*1LL * k*1LL;
        if(bloomDay.size() < res)return -1;
        for(int i : bloomDay){
            high = max(high, i);
            low = min(low, i);
        }    

        while(low <= high){
            int mid = (low + high)/2;
            if(check(bloomDay, mid, m, k) == true){
                high = mid -1;
            }else{
                low = mid+1;
            }
        }
    return low;
    }

};