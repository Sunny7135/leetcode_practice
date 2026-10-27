class Solution {
    public int lengthOfLongestSubstring(String s) {
        int ans = 0, i=0, r=0;
        int n = s.length(), len=0;
        int[] arr = new int[256];
        Arrays.fill(arr, -1);
        while(i<n){
            if(arr[s.charAt(i)] != -1){
                if(arr[s.charAt(i)] >= r){
                    r = arr[s.charAt(i)] +1;
                }
            }
            int mx = i-r+1;
            len = Math.max(len, mx);
            arr[s.charAt(i)] = i;
            i++;
        }
        return len;
    }
}