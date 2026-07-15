class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int odd =1;
        int even =2;
        int sum1 =0, sum2=0;
        for(int i=0; i<n; i++){
            sum1 += odd;
            sum2 += even;
            odd +=2;
            even +=2;
        }
        return gcd(sum1, sum2);
    }
};