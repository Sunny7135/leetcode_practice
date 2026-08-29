class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mn = prices[0];
        int pro=0;
        for(int i=1; i<prices.size(); i++){
            mn = min(mn, prices[i]);
            int mx = prices[i] - mn;
            pro = max(mx, pro);
        }
        return pro;
    }
};