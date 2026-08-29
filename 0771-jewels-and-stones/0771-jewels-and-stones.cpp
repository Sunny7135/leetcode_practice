class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        bool check[256] = {};

        for(char c : jewels){
            check[(unsigned char)c] = true;
        }

        int cnt=0;
        for(char ch : stones){
            if(check[ch])cnt++;
        }
        return cnt;
    }
};