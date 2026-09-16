class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        int cnt =0;
        int l = intervals[0][1];
        for(int i=1; i<intervals.size(); i++){
            if(l > intervals[i][0]){
                cnt++;
                l = min(l, intervals[i][1]);
            }
            else{
                l = intervals[i][1];
            }
        }    
        return cnt;
    }
};