class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int target) {
        int n = arr.size();
        vector<int>res(n, 1e9);
        int l =0, sum =0, ans = 1e9;

        for(int i =0; i<n; i++){
            sum += arr[i];

            while(sum>target){
                sum -= arr[l++];
            }

            if(sum == target){
                int len = i-l+1;

                if(l>0 && arr[l-1] != 1e9){
                    ans = min(ans, len +res[l-1]);
                }

                res[i] = len;
            }
            if(i>0){
                res[i] = min(res[i], res[i-1]);
            }
        }
        return ans==1e9 ?-1: ans;
    }
};