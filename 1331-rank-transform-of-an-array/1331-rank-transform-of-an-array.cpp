class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        set<int> st(arr.begin(), arr.end());

        unordered_map<int, int> mp;
        int start = 1;
        for(int i : st){
            mp[i] = start++;
        }
        for(int &i : arr){
            i = mp[i];
        }
        return arr;
    }
};