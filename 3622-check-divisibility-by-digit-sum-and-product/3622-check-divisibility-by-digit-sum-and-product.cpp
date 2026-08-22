class Solution {
public:
    bool checkDivisibility(int n) {
        int m =n;
        int sum=0, pro=1;
        while(m>0){
            sum = m%10+sum;
            pro = m%10 * pro;
            m/=10;
        }
        int res = sum +pro;
        
        if(n%res == 0)return true;
        return false;
    }
};