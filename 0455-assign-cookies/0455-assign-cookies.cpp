class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int l=0;
        int m=0;
        int n = g.size(), n1 = s.size();
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        while(l<n1 && m<n){
            if(g[m] <= s[l]){
                m++;
            }
            l++;
        }
        return m;
    }
};