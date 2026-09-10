class Solution {
public:
    bool checkValidString(string s) {
        int n = s.size();
        int l=0, r=0;

        for(char c : s){
            if(c == '('){
                l++;
                r++;
            }else if( c ==')'){
                l--;
                r--;
            }else{
                l--;
                r++;
            }
            if(r < 0)return false;

            l = max(l,0);
        }
        return l==0;
    }
};