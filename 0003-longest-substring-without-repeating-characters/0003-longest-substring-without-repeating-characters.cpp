class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i =0, len=0, r=0;
        int n = s.size();
        vector<int>hash(256, -1);
        while(r<n){
            if(hash[s[r]] != -1){
                if(hash[s[r]] >=i){
                    i = hash[s[r]] +1;
                }
            }
            int mx = r-i+1;
            len = max(mx, len);
            hash[s[r]] = r;
            r++;
        }
        return len;
    }
};