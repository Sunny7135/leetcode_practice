class Solution {
public:
    vector<string> readBinaryWatch(int turnedOn) {
        vector<string> res;
        if (turnedOn > 8) return res;
        for (int i = 0; i < 12; i++) {
            int setBit = __builtin_popcount(i);
            if (setBit < turnedOn) {
                int remaining = turnedOn - setBit;
                for (int j = 0; j < 60; j++) {
                    if (__builtin_popcount(j) == remaining) {
                        res.push_back(to_string(i) + ":" + (j < 10 ? "0" : "") + to_string(j));
                    }
                }
            } else if (setBit == turnedOn) {
                res.push_back(to_string(i) + ":00");
            }
        }
        return res;
    }
};