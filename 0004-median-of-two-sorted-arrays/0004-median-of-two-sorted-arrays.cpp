class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        int j = 0, r=0, count=0;
        vector<int>res;
        while(r<n && j<m){
            if(nums1[r] <= nums2[j]){
                res.push_back(nums1[r++]);
            }else{
                res.push_back(nums2[j++]);
            }   
        }
        while(r<n)res.push_back(nums1[r++]);
        while(j<m)res.push_back(nums2[j++]);
 
        count = res.size();

        if(count %2){
            return res[count/2];
        }else{
            return (res[count/2 -1] + res[count/2])/2.0;
        }
    }
};