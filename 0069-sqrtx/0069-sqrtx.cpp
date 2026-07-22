class Solution {
public:
    int mySqrt(int x) {
    if(x==0 || x ==1)return x;
    int i =0, j =x;
    int ans=0;
        while(i<=j){
            long long mid = (i+j)/2;
            long long pro = mid*mid;
            if(pro==x)return mid;
            if(pro > x){
                j = mid-1;
            }else{
                ans = mid;
                i =mid+1;
            }
        }
        return ans;
    }
};