//https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/description/

class Solution {


    int findPeakElement(vector<int>& nums,int low ,int high ,int n) {
         if(low <= high ) 
         {
             int mid = (low + high )/2 ;
             if(nums[n-1] < nums[mid]) return findPeakElement(nums,mid+1,high , n);
             else return findPeakElement(nums,low,mid-1,n);
         }
        return low ;
    }
public:
    int findMin(vector<int>& nums) {
        int  n = nums.size();
        int p = findPeakElement(nums,0,n-1,n);
       
        return nums[p];
        
    }
};