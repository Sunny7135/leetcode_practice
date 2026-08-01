class Solution {
public:
    int myAtoi(string s) {
        int i=0, n = s.size();
        while(i<n && s[i]==' ')i++;

        int j=1;
        if (i<n && (s[i] == '-' || s[i] == '+')){
           if(s[i]=='-')j = -1;
            i++;
        }
        long long ans =0;
        while(i<n && isdigit(s[i])){
            ans = ans*10 + (s[i] - '0');

            if(j==1 && ans > INT_MAX)return INT_MAX;
            if(j==-1 && -ans< INT_MIN)return INT_MIN; 

            i++;

        }
        return ans*j;
    }
}; 