class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char, int>mp;
        for(char c : t){
            mp[c]++;
        }
        int req= t.size();
        int l = 0;
        int st = 0;
        int len = INT_MAX;

        for(int j =0; j<s.size(); j++){
            
            if(mp[s[j]] > 0)req--;

            mp[s[j]]--;

            while(req == 0){
                if(j-l +1 < len){
                    len = j-l+1;
                    st = l;
                }

                mp[s[l]]++;
                if(mp[s[l]] > 0)req++;

                l++;
            }

        }
        return len == INT_MAX ? "" : s.substr(st, len);
    }
};