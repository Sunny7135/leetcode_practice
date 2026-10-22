class Solution {
    public int myAtoi(String s) {
        int n = s.length(), i=0;
        while(i<n && s.charAt(i) == ' ')i++;
        int j =1; 
        if(i<n && (s.charAt(i) == '+' || s.charAt(i) =='-')){
            if(s.charAt(i) == '-')j=-1;
            i++;
        }
        long ans =0;
        while(i<n&& Character.isDigit(s.charAt(i))){
            ans = ans*10 + (s.charAt(i) -'0');
            if(j==1 && ans > Integer.MAX_VALUE)return Integer.MAX_VALUE;
            if(j==-1 && -ans < Integer.MIN_VALUE) return Integer.MIN_VALUE;
            i++;
        }
        return (int)ans*j;
    }
}